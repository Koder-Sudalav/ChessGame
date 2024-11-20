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
    chessBoard = new char* [10];
    for (int i = 0; i < 10; i++) {
      chessBoard[i] = new char [10];
      for (int j = 0; j < 10; j++) {
        if((i + j) % 2 == 0) {
          chessBoard[i][j] = '.';
        } else {
          chessBoard[i][j] = ' ';
        }
      }
    }
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        if(i == 0) {
          if(j > 0) {
            chessBoard[j][i] = '9' - j;
          }
          if(j > 7) {
            break;
          }
        }
        if(i == 9) {
          if(j > 0) {
            chessBoard[j][i] = '9' - j;
          }
          if(j > 7) {
            break;
          }
        }
      }
    }
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        if(i == 0) {
          if(j > 0) {
            chessBoard[i][j] =  '`' + j;
          }
          if(j > 7) {
            break;
          }
        }
        if(i == 9) {
          if(j > 0) {
            chessBoard[i][j] =  '`' + j;
          }
          if(j > 7) {
            break;
          }
        }
      }
    }
    chessBoard[0][0] = ' ';
    chessBoard[9][9] = ' ';
  }

  ~ChessBoard() {
    for (int i = 0; i < 10; i++) {
      delete[] chessBoard[i];
    }
    delete[] chessBoard;
  }

  void showChessBoard() {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        cout << chessBoard[i][j] << " ";
      }
      cout << endl;
    }
  }
};

#endif // CHESSBOARD_H
