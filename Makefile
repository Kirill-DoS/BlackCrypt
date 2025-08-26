#compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# target file 
TARGET = BlackCrypt.out

#source files
SRC = src/*.cpp src/algorithms/XOR/XOR_Cipher.cpp src/algorithms/AES/AES.cpp

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