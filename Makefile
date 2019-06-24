LIBS = -lncurses
run: main.cpp mainBoard.cpp mainBoard.hpp
		g++ -std=c++14 -g -o run main.cpp mainBoard.cpp -pthread $(LIBS)