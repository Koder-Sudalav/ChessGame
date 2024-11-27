#ifndef PIECESCHESS_H
#define PIECESCHESS_H
#include "ChessBoard.h"
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

#endif