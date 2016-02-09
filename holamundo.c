/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>
#include "datos.h"

// Entrada al programa
int main() {
	struct datos persona1, persona2;

	printf("DATOS PERSONA 1\n");
	pregunta_datos(&persona1);

	printf("DATOS PERSONA 2\n");
	pregunta_datos(&persona2);

	imprime_datos(&persona1);
	imprime_datos(&persona2);
}
