#ifndef CHESSBOARDMANAGER_H
#define CHESSBOARDMANAGER_H

#include "../model/piece/Rook.cpp"
#include "../model/piece/Knight.cpp"
#include "../model/piece/Bishop.cpp"
#include "../model/piece/Queen.cpp"
#include "../model/piece/King.cpp"
#include "../model/piece/Pawn.cpp"
#include "../model/board/ChessBoard.h"
#include <iostream>
#include <vector>

using namespace std;

class ChessBoardManager {
private:
    ChessBoard board;
    vector<Piece*> whitePieces;
    vector<Piece*> blackPieces;

public:
    void setPieces() {
        whitePieces.clear();
        blackPieces.clear();

        whitePieces.push_back(new Rook(Color::WHITE));
        whitePieces.push_back(new Knight(Color::WHITE));
        whitePieces.push_back(new Bishop(Color::WHITE));
        whitePieces.push_back(new Queen(Color::WHITE));
        whitePieces.push_back(new King(Color::WHITE));
        whitePieces.push_back(new Bishop(Color::WHITE));
        whitePieces.push_back(new Knight(Color::WHITE));
        whitePieces.push_back(new Rook(Color::WHITE));

        for (int i = 0; i < 8; i++) {
            whitePieces.push_back(new Pawn(Color::WHITE));
        }

        blackPieces.push_back(new Rook(Color::BLACK));
        blackPieces.push_back(new Knight(Color::BLACK));
        blackPieces.push_back(new Bishop(Color::BLACK));
        blackPieces.push_back(new Queen(Color::BLACK));
        blackPieces.push_back(new King(Color::BLACK));
        blackPieces.push_back(new Bishop(Color::BLACK));
        blackPieces.push_back(new Knight(Color::BLACK));
        blackPieces.push_back(new Rook(Color::BLACK));

        for (int i = 0; i < 8; i++) {
            blackPieces.push_back(new Pawn(Color::BLACK));
        }

        for (int i = 0; i < 8; i++) {
            board.setPiece(1, i + 1, whitePieces[i]->getModel());
            board.setPiece(2, i + 1, whitePieces[8 + i]->getModel());
            board.setPiece(7, i + 1, blackPieces[8 + i]->getModel());
            board.setPiece(8, i + 1, blackPieces[i]->getModel());
        }
    }

    void showBoard() {
        board.showChessBoard();
    }
};

#endif // CHESSBOARDMANAGER_H