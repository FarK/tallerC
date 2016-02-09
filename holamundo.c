/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Entrada al programa
int main() {
	char nombre[256];

	printf("> ¿Cómo te llamas?\n");

	scanf("%256s", nombre);

	printf("> Hola %s!\n", nombre);
}
