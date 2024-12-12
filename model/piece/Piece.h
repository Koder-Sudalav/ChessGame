#ifndef PIECE_H
#define PIECE_H
#include "../enum/Color.h"
#include <iostream>
#include <string>

using namespace std;

class Piece {
private:
  Color color;
  wchar_t model;
  int col, row;
public:
  Piece(Color color) : color(color) {}
  void setColor(Color color) {
    color = color;
  }
  Color getColor() {
    return color;
  }
  void setModel(wchar_t figure) {
    model = figure;
  }
  wchar_t getModel() {
    return model;
  }
  void setCol(int x) {
    col = x;
  }
  int getCol() {
    return col;
  }
  void setRow(int y) {
    row = y;
  }
  int getRow() {
    return row;
  }
};

#endif //PIECE_H
