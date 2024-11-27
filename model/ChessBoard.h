#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>

using namespace std;

class ChessBoard {
private:
  wchar_t chessBoard[10][10];
public:
  ChessBoard() {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if((i + j) % 2 == 0) {
          chessBoard[i][j] = L'⬛';
        } else {
          chessBoard[i][j] = L'□';
        }
      }
    }
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        if(i == 0) {
          if(j > 0) {
            chessBoard[j][i] = L'9' - j;
          }
          if(j > 7) {
            break;
          }
        }
        if(i == 9) {
          if(j > 0) {
            chessBoard[j][i] = L'9' - j;
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
            chessBoard[i][j] = L'⒵' + j;
          }
          if(j > 7) {
            break;
          }
        }
        if(i == 9) {
          if(j > 0) {
            chessBoard[i][j] = L'⒵' + j;
          }
          if(j > 7) {
            break;
          }
        }
      }
    }
    chessBoard[0][0] = L' ';
    chessBoard[0][9] = L' ';
    chessBoard[9][9] = L' ';
    chessBoard[9][0] = L' ';
  }

  wchar_t (*getChessBoard())[10] {
    return chessBoard;
  }
  void showChessBoard() {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if(i == 0) {
          if(j == 1) {
            wcout << L" ";
          }
        }
        if(i == 9) {
          if(j == 1) {
            wcout << L" ";
          }
        }
        wcout << chessBoard[i][j] << L" ";
      }
      wcout << endl;
    }
  }
};

#endif // CHESSBOARD_H