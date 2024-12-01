#include "C:/Users/Sudalav Makakovich/Desktop/Chess/model/board/ChessBoard.h"
#include "Piece.h"
#include <iostream>
#include <string>

using namespace std;

class Bishop : public Piece {
public:
  void placeBishops(string c, wchar_t chessBoard[10][10]) {
    if(c == "white") {
      const wchar_t s = L'♗';
      chessBoard[1][3] = s;
      chessBoard[1][6] = s;
    }
    if(c == "black") {
      const wchar_t s = L'♝';
      chessBoard[8][3] = s;
      chessBoard[8][6] = s;
    }
  }
};
