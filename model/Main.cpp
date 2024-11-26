#include "Piece.h"
#include "PiecesChess.h"
#include "ChessBoard.h"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]){
      _setmode(_fileno(stdout), _O_U8TEXT);

      ChessBoard newBoard;
      Rook whiteRook, blackRook;
      Knight whiteKnight, blackKnight;
      Bishop whiteBishop, blackBishop;
      Queen whiteQueen, blackQueen;
      King whiteKing, blackKing;
      Pawn whitePawn, blackPawn;

      whiteRook.placeRooks("white", newBoard.getChessBoard());
      blackRook.placeRooks("black", newBoard.getChessBoard());
      whiteKnight.placeKnights("white", newBoard.getChessBoard());
      blackKnight.placeKnights("black", newBoard.getChessBoard());
      whiteBishop.placeBishops("white", newBoard.getChessBoard());
      blackBishop.placeBishops("black", newBoard.getChessBoard());
      whiteQueen.placeQueen("white", newBoard.getChessBoard());
      blackQueen.placeQueen("black", newBoard.getChessBoard());
      whiteKing.placeKing("white", newBoard.getChessBoard());
      blackKing.placeKing("black", newBoard.getChessBoard());
      whitePawn.placePawns("white", newBoard.getChessBoard());
      blackPawn.placePawns("black", newBoard.getChessBoard());
      newBoard.showChessBoard();
      cin.get();
      return 0;
}
