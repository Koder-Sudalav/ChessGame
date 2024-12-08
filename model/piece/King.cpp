#include "Piece.h"
#include "../enum/Color.h"
#include <iostream>

using namespace std;

class King : public Piece {
public:
  King(Color color) : Piece(color) {
    if(color == Color::WHITE) {
      setModel(L'♔');
    } else {
      setModel(L'♚');
    }
  }
};
