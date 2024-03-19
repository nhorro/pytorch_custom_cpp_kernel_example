#include <torch/extension.h>
#include "tensor.pb.h"

std::string torch_tensor_to_proto(const torch::Tensor& tensor);

torch::Tensor proto_to_torch_tensor(const std::string& serialized);