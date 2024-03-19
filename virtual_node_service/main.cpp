#include <iostream>
#include <zmq.hpp> // ZeroMQ header
#include <vector>
#include <algorithm>
#include <numeric>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

// Alias for a generic tensor
using Tensor = std::vector<float>;

// Function to deserialize two tensors from JSON
std::pair<Tensor, Tensor> tensors_from_json(const std::string& json_str) {
    // Parse the JSON string
    json tensors_json = json::parse(json_str);

    // Deserialize tensor1 from JSON
    auto tensor1_data = tensors_json["tensor1"]["data"].get<Tensor>();
    auto tensor1_sizes = tensors_json["tensor1"]["size"].get<std::vector<int64_t>>();

    // Deserialize tensor2 from JSON
    auto tensor2_data = tensors_json["tensor2"]["data"].get<Tensor>();
    auto tensor2_sizes = tensors_json["tensor2"]["size"].get<std::vector<int64_t>>();

    return std::make_pair(tensor1_data, tensor2_data);
}

// Function to serialize a tensor to JSON
std::string tensor_to_json(const Tensor& tensor, const std::vector<int64_t>& sizes) {
    // Create a JSON object and set tensor properties
    json tensor_json;
    tensor_json["data"] = tensor;
    tensor_json["size"] = sizes;

    // Serialize the JSON object to a string
    return tensor_json.dump();
}

int main() {
    // ZeroMQ context and socket initialization
    zmq::context_t context(1);
    zmq::socket_t socket(context, ZMQ_REP);
    socket.bind("tcp://*:5555"); // Bind to REQ socket

    while (true) {
        // Receive request from ZeroMQ
        zmq::message_t request;
        socket.recv(request);

        std::string request_msg = std::string(static_cast<char*>(request.data()), request.size());
        std::cout << "Received request: " << request_msg << std::endl;

        // Deserialize tensors from JSON
        auto tensors = tensors_from_json(request_msg);
        Tensor a = tensors.first;
        Tensor b = tensors.second;

        // Print the deserialized tensors
        std::cout << "Tensor A:" << std::endl;
        for (float val : a) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        std::cout << "Tensor B:" << std::endl;
        for (float val : b) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        // Check if tensors have the same size
        if (a.size() != b.size()) {
            std::cerr << "Error: Tensors must have the same size for element-wise addition" << std::endl;
            continue; // Skip addition if sizes are different
        }

        // Perform element-wise addition
        Tensor c(a.size());
        std::transform(a.begin(), a.end(), b.begin(), c.begin(), std::plus<float>());

        // Process request (echo back the received message)
        std::string response_msg = tensor_to_json(c, {static_cast<int64_t>(c.size())});

        // Send response back over ZeroMQ
        zmq::message_t response(response_msg.size());
        memcpy(response.data(), response_msg.data(), response_msg.size());
        socket.send(response);
    }

    return 0;
}
