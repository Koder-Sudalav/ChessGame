#include "Piece.h"
#include "../enum/Color.h"
#include <iostream>

using namespace std;

class Queen : public Piece {
public:
  Queen(Color color) : Piece(color) {
    if(color == Color::WHITE) {
      setModel(L'♕');
    } else {
      setModel(L'♛');
    }
  }
};
