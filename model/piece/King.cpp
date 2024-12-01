#include "C:/Users/Sudalav Makakovich/Desktop/Chess/model/board/ChessBoard.h"
#include "Piece.h"
#include <iostream>
#include <string>

using namespace std;

class King : public Piece {
public:
  void placeKing(string c, wchar_t chessBoard[10][10]) {
    if(c == "white") {
      const wchar_t s = L'♔';
      chessBoard[1][4] = s;
    }
    if(c == "black") {
      const wchar_t s = L'♚';
      chessBoard[8][5] = s;
    }
  }
};
