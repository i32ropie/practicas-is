/*
 * Rectangulo.cpp
 *
 *  Created on: 10/12/2014
 *      Author: javi
 */

#include "Rectangulo.h"
#include <iostream>

namespace ejemplos {

Rectangulo::Rectangulo() {
	ancho = 0;
	alto = 0;
}

float Rectangulo::area() {
	std::cout << "Llamada la función area() de Rectangulo" << std::endl;
	return ancho*alto;
}

} /* namespace ejemplos */

