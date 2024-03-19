// custom_kernel.cpp
#include <torch/extension.h>
#include <zmq.hpp>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

// Function to serialize two PyTorch tensors to JSON
std::string tensors2_to_json(const torch::Tensor& tensor1, const torch::Tensor& tensor2) {
    // Convert the tensors to std::vectors
    std::vector<float> tensor1_data(tensor1.data_ptr<float>(), tensor1.data_ptr<float>() + tensor1.numel());
    std::vector<float> tensor2_data(tensor2.data_ptr<float>(), tensor2.data_ptr<float>() + tensor2.numel());

    // Create a JSON object and set tensor properties
    json tensors_json;
    tensors_json["tensor1"]["data"] = tensor1_data;
    tensors_json["tensor1"]["size"] = tensor1.sizes();
    tensors_json["tensor1"]["dtype"] = torch::toString(tensor1.scalar_type());

    tensors_json["tensor2"]["data"] = tensor2_data;
    tensors_json["tensor2"]["size"] = tensor2.sizes();
    tensors_json["tensor2"]["dtype"] = torch::toString(tensor2.scalar_type());

    // Serialize the JSON object to a string
    return tensors_json.dump();
}

// Function to deserialize a PyTorch tensor from JSON
torch::Tensor tensor_from_json(const std::string& json_str) {
    // Parse the JSON string
    json tensor_json = json::parse(json_str);

    // Extract tensor properties from JSON
    auto tensor_data = tensor_json["data"].get<std::vector<float>>();
    auto tensor_sizes = tensor_json["size"].get<std::vector<int64_t>>();

    // Create a PyTorch tensor from the extracted properties
    // torch::Tensor tensor = torch::from_blob(
    //     tensor_data.data(), 
    //     tensor_sizes, 
    //     torch::dtype(torch::kFloat32));

    // Workaround:
    
    // Create a tensor of zeros with the specified size
    torch::Tensor tensor = torch::zeros(tensor_sizes, torch::dtype(torch::kFloat32));
    for(int i=0;i<tensor_sizes[0];i++)
        //std::cout << "Tensor data " << i << ": " << tensor_data[i] << std::endl;
        tensor[i] = tensor_data[i];

    return tensor;
}

namespace custom_ops {
    torch::Tensor custom_kernel(torch::Tensor a, torch::Tensor b) {

        // Ensure input tensors have the same shape
        TORCH_CHECK(a.sizes() == b.sizes(), "Input tensors must have the same shape");

        // Serialize
        std::string tensors_str = tensors2_to_json(a,b);
        
        // ZeroMQ context and socket initialization
        zmq::context_t context(1);
        zmq::socket_t socket(context, ZMQ_REQ);
        socket.connect("tcp://localhost:5555"); // Connect to REP socket

        // Send arguments over ZeroMQ
        zmq::message_t request(tensors_str.size());
        memcpy(request.data(), tensors_str.data(), tensors_str.size());
        socket.send(request);

        // Receive response from ZeroMQ (optional)
        zmq::message_t response;
        socket.recv(response);

        std::string reply_msg = std::string(static_cast<char*>(response.data()), response.size());
        std::cout << "Received reply: " << reply_msg << std::endl;

        torch::Tensor c = tensor_from_json(reply_msg);

        std::cout << c << std::endl;

        return c;
    }
} // namespace custom_custom_ops

PYBIND11_MODULE(custom_kernel_cpp, m) {
    m.def(
        "custom_kernel", 
        &custom_ops::custom_kernel);
}

