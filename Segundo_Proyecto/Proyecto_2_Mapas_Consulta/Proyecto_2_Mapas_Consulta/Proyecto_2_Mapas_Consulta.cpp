#include <iostream>
#include "CImg.h"
#include "Header.h"
#include "stdlib.h"

using namespace std;
using namespace cimg_library;

int main()
{
	cout << "==============> Menu de mapa de Costa Rica <==============" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "0) ¿Desea salir del programa?" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "1) Imprimir en texto: poblaciones" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "2)  Imprimir en texto:Escuelas" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "3)  Imprimir en texto: Colegios" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "4) Graficar Poblaciones " << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "5) Graficar Escuelas " << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "6) Graficar Poblaciones, Escuelas y Colegios" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "7) Graficar e imprimir : Personalizada." << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "8) Generar e imprimir índices." << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "9) Filtrar, imprimir y graficar listado según un parámetro." << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "10) Filtrar, imprimir y graficar listado por provincia, según un parámetro. " << endl;
	cout << "----------------------------------------------------------" << endl;

	return 0;
}
