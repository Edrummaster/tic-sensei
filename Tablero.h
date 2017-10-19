#include <string.h>
#include <iostream>
using namespace std;

class Tablero{
	private:
		Ficha matriz[3][3];
	public:
		Tablero(string etiquetas);
		void dibujarse();
		Ficha *obtenerFicha(char etiqueta);
		bool verificarTickyFilas(&fila);
		bool verificarTickyColumnas(&col);
		bool verificarTickyDiagonal(&diag);
		asignarSimbolo(char etiqueta, char simbolo);
};
