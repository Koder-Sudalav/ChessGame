//
// Created by Sudalav Makakovich on 16.11.2024.
//
#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>

using namespace std;

class ChessBoard {
private:
  char** chessBoard;
public:
  ChessBoard() {
    chessBoard = new char* [8];
    for (int i = 0; i < 8; ++i) {
      chessBoard[i] = new char [8];
      for (int j = 0; j < 8; ++j) {
        chessBoard[i][j] = '.';
      }
    }
  }

  ~ChessBoard() {
    for (int i = 0; i < 8; ++i) {
      delete[] chessBoard[i];
    }
    delete[] chessBoard;
  }

  void showChessBoard() const {
    for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
        cout << chessBoard[i][j] << " ";
      }
      cout << endl;
    }
  }
};

#endif // CHESSBOARD_H
