#pragma once

class Board {
public:
  Board();
  void renderBoard() const;
  void makeMove(char piece, int x, int y);
  char getCharacterAtPos(int x, int y) const;
  ~Board();

private:
  char positions[9];
};
