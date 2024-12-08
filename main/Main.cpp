#include "../service/ChessBoardManager.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]){
	_setmode(_fileno(stdout), _O_U8TEXT);

	ChessBoardManager manager;
	manager.setPieces();
	manager.showBoard();

	cin.get();
	return 0;
}
