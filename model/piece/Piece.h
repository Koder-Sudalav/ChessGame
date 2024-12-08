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
};

#endif //PIECE_H
