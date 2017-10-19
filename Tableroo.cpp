#include Tablero.h
Tablero(string etiquetas){
	int k=0;
	for(int i; i<3;i++){
		for(int j; j<3; j++){
			Ficha f = (' ',etiquetas[k]); //abcd...g
			matriz[i][j] = f;
		}
	}
}

void dibujarse(){
	for(int i; i<3;i++){
		for(int j; j<3; j++){
			Ficha f = matriz[i][j];
			f.dibujarse();
		}
		cout<<endl;
	}
}




Ficha *obtenerFicha(char etiqueta){
	for(int i; i<3;i++){
		for(int j; j<3; j++){
			Ficha f = matriz[i][j];
			if (f.getEtiqueta() == etiqueta)
				return &f;
		}
	}
	return NULL;
}


bool verificarTickyFilas(&fila){
	if(matriz[0][0].getSimbolo() == matriz[0][1].getSimbolo() && matriz[0][0].getSimbolo() ==matriz[0][2].getSimbolo()){
		fila = 0;
		return true;
	}

	if(matriz[1][0].getSimbolo() == matriz[1][1].getSimbolo() && matriz[1][0].getSimbolo() ==matriz[1][2].getSimbolo()){
		fila = 0;
		return true;
	}

	if(matriz[2][0].getSimbolo() == matriz[2][1].getSimbolo() && matriz[2][0].getSimbolo() ==matriz[2][2].getSimbolo()){
		fila = 0;
		return true;
	}

	return false;
}


		bool verificarTickyColumnas(&col);
		bool verificarTickyDiagonal(&diag);
//busca etiqueta y cambia simbolo


		
void Tablero::asignarSimbolo(char etiqueta, char simbolo){ 
	for(int i; i<3;i++){
		for(int j; j<3; j++){
			Ficha f = &matriz[i][j];
			if (f->getEtiqueta() == etiqueta){
				f->setSimbolo(simbolo);
			}
		}
	}
}