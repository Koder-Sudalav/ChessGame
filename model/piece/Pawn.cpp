#include "Piece.h"
#include "../enum/Color.h"
#include <iostream>

using namespace std;

class Pawn : public Piece {
public:
  Pawn(Color color) : Piece(color) {
    if(color == Color::WHITE) {
      setModel(L'♙');
    } else {
      setModel(L'♟');
    }
  }
};
