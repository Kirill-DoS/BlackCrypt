#compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# target file 
TARGET = crypto

#source files
SRC = src/*.cpp src/algorithms/XOR_Cipher.cpp

#assembly
$(TARGET):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

#clean
clean:
	rm -f $(TARGET)

#run
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run