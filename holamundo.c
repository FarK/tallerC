/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Entrada al programa
int main() {
	int array[] = {1, 2, 3, 4, 5};
	int *p;

	// MODIFICANDO ARRAY A TRAVÉS DEL PUNTERO
	// p apuntado a la primera dirección del array
	p = array;
	p = &array[0];

	// Incremento de punteros
	p += 1;
	printf("*p = %d\n\n", *p);
	p--;

	// Modificamos el array
	printf("*p = %d\n", *p);
	*p = 11;
	printf("array[0] = %d\n", array[0]);

	// Puntero como array
	p[2] = 33;
	printf("array[2] = %d\n", array[2]);

	// PUNTEROS Y CADENAS
	const char *cadena = "asdf";
	printf("\ncadena = \"%s\"\n", cadena);

	// USANDO PUNTEROS PARA RECORRER ARRAYS
	printf("\nRECORRIENDO ARRAY\n");
	int i;
	p = array;

	// forma 1: Contador e incremento de puntero
	printf("forma 1\n\t");
	for (i = 0; i < 5; i++)
		printf("%d\t", *p++);

	// forma 2: Incremento de puntero y comparación de direcciones
	printf("\nforma 2\n\t");
	for (p = array; p <= &array[4]; p++)
		printf("%d\t", *p);

	// forma 3: Contador y puntero como array
	printf("\nforma 3\n\t");
	for (i = 0, p = array; i < 5; i++)
		printf("%d\t", p[i]);

	printf("\n");


	// JUGANDO CON PUNTEROS
	int magic = '\0' << 3*8 | 'y' << 2*8 | 'a' << 1*8 | 'w';
	magic = 0x00796177;
	printf("\nmagic = %0X\n", magic);
	printf("magic = \"%s\"\n", (char *)(&magic));
}
