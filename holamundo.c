/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Entrada al programa
int main() {
	int i = 42;
	int j = 3;
	int *pi = &i;	// Puntero de entero

	printf("valor de i = %d\n", i);
	printf("valor de j = %d\n\n", j);

	// VALOR -> DIRECCIÓN (&)
	// Dirección de memoria dónde está guardada i
	printf("dir de i    = %p\n", &i);

	// DIRECCIÓN -> VALOR (*)
	// VALOR guardado en la dirección que guarda pi
	printf("valor en pi = %d\n\n", *pi);

	// INICIALIZACIÓN
	int *pj = &j;

	// EJEMPLOS ASIGNACIONES
	// pi guarda la DIRECCIÓN de memoria donde está guardada i
	pi = &i;
	printf("dir en pi  = %p\n", pi);

	/*
	 * a j se le asigna el VALOR almacenado en la DIRECCIÓN de memoria que
	 * guarda pi
	 */
	printf("\n*pi = *pj\n");
	printf("\tvalor de j = %d\t(antes)\n", j);
	j  = *pi;
	printf("\tvalor de j = %d\t(después)\n", j);

	// se guarda el VALOR de i en la DIRECCIÓN de memoria que guarda pi
	*pi = i;

	/*
	 * Se guarda el VALOR almacenado en la DIRECCIÓN de memoria que guarda
	 * pj, en la DIRECCIÓN de pi
	 */
	printf("\n*pi = *pj\n");
	printf("\tvalor de i = %d\t(antes)\n", i);
	*pi = *pj;
	printf("\tvalor de i = %d\t(antes)\n", i);

	return 0;
}
