Tensor Operator Node Service (dummy)
====================================

This a simple program that expects to receive to tensors using ZeroMQ/JSON as a communication layer, adds them, and returns the result.

To build:

~~~bash
cd virtual_node_service
make
chmod +x vns
~~~