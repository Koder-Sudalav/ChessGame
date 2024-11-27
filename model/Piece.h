#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include <string>

using namespace std;

class Piece {
private:
  string color;
public:
  void pieceColor(string c) {
    color = c;
  }
  string getColor() {
    return color;
  }
};

#endif //PIECE_H
