#ifndef PIECEMANAGER_H
#define PIECEMANAGER_H
#include "../model/piece/Rook.cpp"
#include "../model/piece/Knight.cpp"
#include "../model/piece/Bishop.cpp"
#include "../model/piece/Queen.cpp"
#include "../model/piece/King.cpp"
#include "../model/piece/Pawn.cpp"
#include <iostream>
#include <vector>

using namespace std;

class PieceManager {
private:
    vector<Piece*> whitePieces;
    vector<Piece*> blackPieces;
public:
  void initialWhitePieces() {
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
  }
  vector<Piece*> getWhite() {
    return whitePieces;
  }
  void initialBlackPieces() {
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
  }
    vector<Piece*> getBlack() {
      return blackPieces;
    }
};

#endif //PIECEMANAGER_H
