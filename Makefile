CC ?= gcc
CXX ?= g++
CFLAGS = -Wall -Wextra -std=c11
CXXFLAGS = -Wall -Wextra -std=c++17

.PHONY: test build clean

build:
	mkdir -p bin
	for f in c/*.c; do $(CC) $(CFLAGS) $$f -o bin/$$(basename $$f .c) || exit 1; done
	for f in cpp/*.cpp; do $(CXX) $(CXXFLAGS) $$f -o bin/$$(basename $$f .cpp) || exit 1; done

test: build
	$(CC) $(CFLAGS) tests/test_c.c -o bin/test_c && ./bin/test_c
	$(CXX) $(CXXFLAGS) tests/test_cpp.cpp -o bin/test_cpp && ./bin/test_cpp
	$(MAKE) -C calculator test

clean:
	rm -rf bin
	$(MAKE) -C calculator clean
