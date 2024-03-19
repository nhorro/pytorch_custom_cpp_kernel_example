CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -O2
LDFLAGS := -lzmq
INCLUDE_DIRS := $(CONDA_PREFIX)/include
LIB_DIRS := $(CONDA_PREFIX)/lib

.PHONY: all clean

all: vns

vns: main.cpp
	echo $(CXX) $(CXXFLAGS) -o $@ $^ -I$(INCLUDE_DIRS) -L$(LIB_DIRS) $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(foreach d, $(INCLUDE_DIRS), -I$d) -L$(LIB_DIRS) $(LDFLAGS)

clean:
	rm -f vns