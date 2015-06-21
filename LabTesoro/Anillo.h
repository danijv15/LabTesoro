#ifndef ANILLO_H_
#define ANILLO_H_

#include <iostream>
#include <string>
using namespace std;

class Anillo {
	public:

		//constructor por default
		Anillo();

		//constructor sobrecargado
		Anillo(int, int, int);

		//destructor
		virtual ~Anillo();

		//Accesar a las funciones
		int obtCantidad() const;

		int obtValor() const;

		int obtPeso() const;

	private:

		int cantidad = 50 + (rand % 101 - 50);
		int valor = 100 + (rand % 201 - 100);
		int peso = 200 + (rand() % 301 - 200);

		int nuevoCantidad;
		int nuevoValor;
		int nuevoPeso;
};

#endif /* ANILLO_H_ */
