#include "Board.h"
#include <iostream>

Board::Board() : positions{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '} {};

void Board::renderBoard() const {
  std::cout << "+-+-+-+" << std::endl;
  for (int i = 0; i < 3; i++) {
    std::cout << '|';
    for (int j = 0; j < 3; j++) {
      std::cout << positions[j + i * 3] << '|';
    }
    std::cout << std::endl << "+-+-+-+" << std::endl;
  }
}

void Board::makeMove(char piece, int x, int y) {
  if (x * 3 + y >= 9) {
    std::cout << "Input out of range" << std::endl;
    return;
  }

  if (getCharacterAtPos(x, y) != ' ') {
    std::cout << "Position already occupied!" << std::endl;
  }

  positions[x * 3 + y] = piece;
}

char Board::getCharacterAtPos(int x, int y) const {
  if (x * 3 + y >= 9) {
    std::cout << "Input out of range" << std::endl;
    return NULL;
  }

  return positions[x * 3 + y];
}
Board::~Board() {};
