/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Entrada al programa
int main() {
	// Algunas variables de distintos tipos
	char caracter = 'c';  // Declaración e inicialización
	int numero_entero;    // Declaración de una variable sin inicializar
	float numero_real;    // Variable en coma flotante

	long int numero_entero_grande;
	unsigned char byte_sin_signo;
	double numero_real_preciso;

	numero_real = 3.3;
	numero_entero = numero_real * 2;

	// Impresión de variables
	printf("VALORES:\n");
	printf("\tcaracter      = %c\n", caracter);
	printf("\tnumero_entero = %d\n", numero_entero);
	printf("\tnumero_real   = %f\n", numero_real);

	// Tamaños de cada tipo
	printf("TAMAÑOS:\n");
	printf("\tchar          = %lu\n", sizeof(caracter));
	printf("\tunsigned char = %lu\n", sizeof(byte_sin_signo));
	printf("\tint           = %lu\n", sizeof(int));
	printf("\tlong int      = %lu\n", sizeof(numero_entero_grande));
	printf("\tfloat         = %lu\n", sizeof(float));
	printf("\tdouble        = %lu\n", sizeof(numero_real_preciso));

	return 0;
}
