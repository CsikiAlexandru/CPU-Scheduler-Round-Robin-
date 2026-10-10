CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2
TARGET = scheduler

all: $(TARGET)

$(TARGET): main_3.cpp Proces_4.cpp Planificator_3.cpp
	$(CXX) $(CXXFLAGS) main_3.cpp Proces_4.cpp Planificator_3.cpp -o $(TARGET)

clean:
	rm -f $(TARGET)