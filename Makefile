lin: ./src/*.cpp
	g++ ./src/*.cpp -o TicTacToe.exe -I./headers -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23

win: ./src/main.cpp
	cl /Fe:program.exe /I./headers  ./src/*.cpp
