#include "../service/ChessBoardManager.h"
#include "../service/PieceManager.h"
#include "../model/piece/Piece.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
	_setmode(_fileno(stdout), _O_U8TEXT);

	ChessBoardManager manager;
	PieceManager initialPieceManager;

	initialPieceManager.initialWhitePieces();
	initialPieceManager.initialBlackPieces();

	vector<Piece*> whitePieces = initialPieceManager.getWhite();
	vector<Piece*> blackPieces = initialPieceManager.getBlack();

	manager.placeWhitePieces(whitePieces);
	manager.placeBlackPieces(blackPieces);

	manager.showBoard();

	cin.get();
	return 0;
}
