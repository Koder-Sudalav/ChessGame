#include "C:/Users/Sudalav Makakovich/Desktop/Chess/model/board/ChessBoard.h"
#include "Piece.h"
#include <iostream>
#include <string>

using namespace std;

class Queen : public Piece {
public:
  void placeQueen(string c, wchar_t chessBoard[10][10]) {
    if(c == "white") {
      const wchar_t s = L'♕';
      chessBoard[1][5] = s;
    }
    if(c == "black") {
      const wchar_t s = L'♛';
      chessBoard[8][4] = s;
    }
  }
};
