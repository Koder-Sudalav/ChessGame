#include "C:/Users/Sudalav Makakovich/Desktop/Chess/model/board/ChessBoard.h"
#include "Piece.h"
#include <iostream>
#include <string>

using namespace std;

class Knight : public Piece {
public:
  void placeKnights(string c, wchar_t chessBoard[10][10]) {
    if(c == "white") {
      const wchar_t s = L'♘';
      chessBoard[1][2] = s;
      chessBoard[1][7] = s;
    }
    if(c == "black") {
      const wchar_t s = L'♞';
      chessBoard[8][2] = s;
      chessBoard[8][7] = s;
    }
  }
};
