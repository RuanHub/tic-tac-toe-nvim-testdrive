#pragma once

#include <string>

using std::string;

class Player {
public:
  Player(char p);
  ~Player();
  void getPlayerInput(int &x, int &y) const;
  string getPlayerName() const;

private:
  string name;
  char piece;
};
