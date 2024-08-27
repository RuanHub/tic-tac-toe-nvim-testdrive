#include "../headers/Board.h"
#include <iostream>
int main() {
  // The board
  char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

  // Print board
  std::cout << "+-+-+-+" << std::endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j == 0)
        std::cout << '|';
      std::cout << board[3 * i + j] << '|';
    }
    std::cout << std::endl << "+-+-+-+" << std::endl;
  }

  Board myBoard;

  return 0;
}
