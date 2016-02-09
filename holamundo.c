/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Macros del preprocesador
#define LEN 256

// Entrada al programa
int main() {
	char nombre[LEN];
	char apellido1[LEN];
	char apellido2[LEN];
	char dni[10];
	int telefono;

	/* Ojo con scanf! */
	printf("> ¿Cómo te llamas?\n");
	scanf("%256s", nombre);

	printf("> ¿Cuál es tu primer apellido?\n");
	scanf("%256s", apellido1);

	printf("> ¿Cuál es tu segundo apellido?\n");
	scanf("%256s", apellido2);

	printf("> ¿Cuál es tu DNI?\n");
	scanf("%10s", dni);

	printf("> ¿Cuál es tu teléfono?\n");
	scanf("%9d", &telefono);

	printf("> Hola %s %s %s!"
	       "\n\tDNI  = %s"
	       "\n\ttlfn = %d\n", nombre, apellido1, apellido2, dni, telefono);
}
