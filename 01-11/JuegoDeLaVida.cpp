#include <iostream>
#include "Tablero.h"
using namespace std;




int main(){
	Tablero tablero(3,4,5);
	tablero.imprimirTablero();
	cout << "\x1b[38;2;255;100;0m■\x1b[0m\n";
	return 0;
}