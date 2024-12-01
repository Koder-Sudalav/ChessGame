#include "C:/Users/Sudalav Makakovich/Desktop/Chess/model/board/ChessBoard.h"
#include "Piece.h"
#include <iostream>
#include <string>

using namespace std;

class Rook : public Piece {
public:
  void placeRooks(string c, wchar_t chessBoard[10][10]) {
    if (c == "white") {
      const wchar_t s = L'♖';
      chessBoard[1][1] = s;
      chessBoard[1][8] = s;
    }
    if (c == "black") {
      const wchar_t s = L'♜';
      chessBoard[8][1] = s;
      chessBoard[8][8] = s;
    }
  }
};
