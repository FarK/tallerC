/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Entrada al programa
int main() {
	int array[4] = {11, 22, 33, 44};

	array[2] = 0;

	int i;
	printf("array = {\n");
	for (i = 0; i < 4; i++)
		printf("\t[%d] = %d\n", i, array[i]);
	printf("}\n");


	/***********
	 * CADENAS *
	 ***********/
	// Declaración con tamaño explicito e inicialización de cada elemento
	char hola[5] = {'h', 'o', 'l', 'a', '\0'};
	printf("\nhola = {\n");
	for (i = 0; i < 4; i++)
		printf("\t[%d] = %c\n", i, hola[i]);
	printf("}\n");

	printf("\nhola = \"%s\"\n", hola);


	// Declaración con tamaño implícito e inicialización como cadena
	char mundo[] = "mundo";

	printf("\nmundo = {\n");
	for (i = 0; i < 5; i++)
		printf("\t[%d] = %c\n", i, mundo[i]);
	printf("}\n");

	printf("\nmundo = \"%s\"\n", mundo);

	return 0;
}
