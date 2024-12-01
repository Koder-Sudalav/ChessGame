#include "C:/Users/Sudalav Makakovich/Desktop/Chess/model/board/ChessBoard.h"
#include "Piece.h"
#include <iostream>
#include <string>

using namespace std;

class Pawn : public Piece {
public:
  void placePawns(string c, wchar_t chessBoard[10][10]) {
    if (c == "white") {
      const wchar_t s = L'♙';
      for (int i = 1; i <= 8; i++) {
        chessBoard[2][i] = s;
      }
    }
    if (c == "black") {
      const wchar_t s = L'♟';
      for (int i = 1; i <= 8; i++) {
        chessBoard[7][i] = s;
      }
    }
  }
};
