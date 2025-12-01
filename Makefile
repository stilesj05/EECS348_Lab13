CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = lab13.exe
SRC = lab13.cpp

all: $(TARGET)  # default target

$(TARGET): $(SRC)  # compile program
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:  # remove executable
	rm -f $(TARGET)
