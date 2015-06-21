#include "Anillo.h"

#include <stdlib.h>
#include <time.h>

Anillo::Anillo() {

	nuevoCantidad = 0;
	nuevoValor = 0;
	nuevoPeso = 0;

}

Anillo::Anillo(int cantidad, int valor, int peso) {

	nuevoCantidad = cantidad;

	nuevoValor = valor;

	nuevoPeso = peso;
}

Anillo::~Anillo() {

	int nuevoCantidad = 0;
	delete nuevoCantidad;

	int nuevoValor = 0;
	delete nuevoValor;

	int nuevoPeso = 0;
	delete nuevoPeso;

}

int Anillo::obtCantidad() const {

	return nuevoCantidad;
}

int Anillo::obtValor() const {

	return nuevoValor;
}

int Anillo::obtPeso() const {

	return nuevoPeso;
}




