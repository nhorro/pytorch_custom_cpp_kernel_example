from setuptools import setup, Extension
from torch.utils import cpp_extension

sources = [
    'custom_kernel.cpp'
]

# Additional linker flags for Protocol Buffers
libraries = ["zmq"]

setup(name='custom_kernel_cpp',
    ext_modules=[
        cpp_extension.CppExtension(
              'custom_kernel_cpp', 
              sources,
              libraries=libraries,
        )
    ],
    
    cmdclass={'build_ext': cpp_extension.BuildExtension},
    # Specify dynamic linking for the libraries
    zip_safe=False    
)