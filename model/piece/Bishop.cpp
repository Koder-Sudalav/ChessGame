#include "Piece.h"
#include "../enum/Color.h"
#include <iostream>

using namespace std;

class Bishop : public Piece {
public:
  Bishop(Color color) : Piece(color) {
    if(color == Color::WHITE) {
      setModel(L'♗');
    } else {
      setModel(L'♝');
    }
  }
};
