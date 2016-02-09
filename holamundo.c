/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Macros del preprocesador
#define LEN 256

// Entrada al programa
int main() {
	char datos[5][LEN];

	/* Ojo con scanf! */
	printf("> ¿Cómo te llamas?\n");
	scanf("%256s", datos[0]);

	printf("> ¿Cuál es tu primer apellido?\n");
	scanf("%256s", datos[1]);

	printf("> ¿Cuál es tu segundo apellido?\n");
	scanf("%256s", datos[2]);

	printf("> ¿Cuál es tu DNI?\n");
	scanf("%10s", datos[3]);

	printf("> ¿Cuál es tu teléfono?\n");
	scanf("%9s", datos[4]);

	printf("> Hola %s %s %s!"
	       "\n\tDNI  = %s"
	       "\n\ttlfn = %s\n",
	       datos[0], datos[1], datos[2], datos[3], datos[4]);
}
