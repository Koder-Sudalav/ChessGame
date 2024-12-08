#include "Piece.h"
#include "../enum/Color.h"
#include <iostream>

using namespace std;

class Knight : public Piece {
public:
  Knight(Color color) : Piece(color) {
    if(color == Color::WHITE) {
      setModel(L'♘');
    } else {
      setModel(L'♞');
    }
  }
};
