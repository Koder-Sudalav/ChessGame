#include "Piece.h"
#include "../enum/Color.h"
#include <iostream>

using namespace std;

class Rook : public Piece {
public:
  Rook(Color color) : Piece(color) {
    if(color == Color::WHITE) {
      setModel(L'♖');
    } else {
      setModel(L'♜');
    }
  }
};