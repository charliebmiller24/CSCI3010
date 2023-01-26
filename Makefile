
CXX = g++  
CXXFLAGS = -std=c++17 -Wall  

all: main

clean: rm main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp 

main: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp 

