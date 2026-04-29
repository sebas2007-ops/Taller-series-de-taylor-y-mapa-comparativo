CXX = g++
CXXFLAGS=-std=c++17 -02
TARGET = programa
OBJS = main.o taylor.o
build: $(TARGET)
$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)
main.o: main.cpp taylor.h
	$(CXX) -c main.cpp
taylor.o: taylor.cpp taylor.h
	$(CXX) -c taylor.cpp
run: build
	./$(TARGET)
clean:
	rm -f *.o $(TARGET)
