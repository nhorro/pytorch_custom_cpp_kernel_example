#include "tensor_serialization.h"

// Function to serialize a PyTorch tensor to bytes using Protocol Buffers
std::string torch_tensor_to_proto(const torch::Tensor& tensor) {
    // Create a TensorMessage instance
    TensorMessage tensor_msg;

    // Set tensor data
    auto tensor_accessor = tensor.accessor<float, 1>();
    for (int i = 0; i < tensor.numel(); ++i) {
        tensor_msg.add_data(tensor_accessor[i]);
    }

    // Set tensor sizes
    for (int64_t size : tensor.sizes()) {
        tensor_msg.add_size(size);
    }

    // Set tensor dtype
    tensor_msg.set_dtype(torch::toString(tensor.scalar_type()));

    // Serialize the TensorMessage to bytes
    std::string serialized;
    tensor_msg.SerializeToString(&serialized);

    return serialized;
}


// Function to deserialize bytes into a PyTorch tensor using Protocol Buffers
torch::Tensor proto_to_torch_tensor(const std::string& serialized) {
    // Parse the serialized bytes into a TensorMessage instance
    TensorMessage tensor_msg;
    tensor_msg.ParseFromString(serialized);

    // Reconstruct the PyTorch tensor from the TensorMessage
    std::vector<int64_t> sizes(tensor_msg.size().begin(), tensor_msg.size().end());
    torch::Tensor tensor = torch::empty(sizes);
    auto tensor_accessor = tensor.accessor<float, 1>();
    for (int i = 0; i < tensor.numel(); ++i) {
        tensor_accessor[i] = tensor_msg.data(i);
    }

    return tensor;
}