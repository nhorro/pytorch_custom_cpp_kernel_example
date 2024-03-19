#include <iostream>
#include <fstream>
#include <torch/torch.h>
#include <nlohmann/json.hpp>  // JSON library, you may need to install it

using json = nlohmann::json;

// Function to serialize a PyTorch tensor to JSON
std::string torch_tensor_to_json(const torch::Tensor& tensor) {
    // Convert the tensor to a std::vector
    std::vector<float> tensor_data(tensor.data_ptr<float>(), tensor.data_ptr<float>() + tensor.numel());

    // Create a JSON object and set tensor properties
    json tensor_json;
    tensor_json["data"] = tensor_data;
    tensor_json["size"] = tensor.sizes();
    tensor_json["dtype"] = torch::toString(tensor.scalar_type());

    // Serialize the JSON object to a string
    return tensor_json.dump();
}

// Function to deserialize JSON into a PyTorch tensor
torch::Tensor json_to_torch_tensor(const std::string& json_str) {
    // Parse the JSON string
    json tensor_json = json::parse(json_str);

    // Extract tensor properties from JSON
    auto tensor_data = tensor_json["data"].get<std::vector<float>>();
    auto tensor_sizes = tensor_json["size"].get<std::vector<int64_t>>();
    auto tensor_dtype = torch::ScalarType::fromString(tensor_json["dtype"].get<std::string>());

    // Create a PyTorch tensor from the extracted properties
    torch::Tensor tensor = torch::from_blob(tensor_data.data(), tensor_sizes, torch::dtype(tensor_dtype));

    return tensor;
}