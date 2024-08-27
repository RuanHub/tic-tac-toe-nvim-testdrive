#include "Player.h"
#include <format>
#include <iostream>

Player::Player(char p) {
  piece = p;
  std::cout << "'" << piece << "' player name: " << std::endl;
  std::getline(std::cin, name);
}

Player::~Player() {}

void Player::getPlayerInput(int &x, int &y) const {
  do {
    std::cout << std::format("{}'s player's turn. Please enter the coordinates "
                             "seperated by a space. ('x y')",
                             name)
              << std::endl;
    std::cin >> x;
    std::cin >> y;
    x--;
    y--;
    if (x < 0 || x > 2 || y < 0 || y > 2) {
      std::cout << "Input is out of range. Numbers must be between 1 and 3."
                << std::endl;
    }
  } while (x < 0 || x > 2 || y < 0 || y > 2);
}

string Player::getPlayerName() const { return name; }
