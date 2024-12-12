#ifndef CHESSBOARDMANAGER_H
#define CHESSBOARDMANAGER_H

#include "../model/board/ChessBoard.h"
#include "PieceManager.h"
#include <iostream>
#include <vector>

using namespace std;

class ChessBoardManager {
private:
    ChessBoard board;
    vector<Piece*> whitePieces;
    vector<Piece*> blackPieces;

public:
    void placeWhitePieces(const vector<Piece*>& white_pieces) {
        whitePieces = white_pieces;

        for (int i = 0; i < 8; i++) {
            board.setPiece(1, i + 1, whitePieces[i]->getModel());
            board.setPiece(2, i + 1, whitePieces[8 + i]->getModel());
        }
    }
    void placeBlackPieces(const vector<Piece*>& black_pieces) {
        blackPieces = black_pieces;

        for (int i = 0; i < 8; i++) {
            board.setPiece(7, i + 1, blackPieces[8 + i]->getModel());
            board.setPiece(8, i + 1, blackPieces[i]->getModel());
        }
    }
    void setPieceToBoard(int col, int row, Piece* piece) {
        board.setPiece(row, col, piece->getModel());
    }
    void showBoard() {
        board.showChessBoard();
    }
};

#endif // CHESSBOARDMANAGER_H