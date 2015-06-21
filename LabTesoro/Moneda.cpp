#include "Moneda.h"

#include <stdlib.h>
#include <time.h>

Moneda::Moneda() {

	int cantidad = 1000 + (rand % 10001 - 1000);
	int valor = rand() % 100 + 1;
	int peso = 100 + (rand() % 201 - 100);
}

Moneda::~Moneda() {

	int cantidad = 0;
	delete cantidad;

	int valor = 0;
	delete valor;

	int peso = 0;
	delete peso;
}



