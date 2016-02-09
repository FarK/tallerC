/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Macros del preprocesador
#define LEN 256

struct datos {
	char nombre[LEN];
	char apellido1[LEN];
	char apellido2[LEN];
	char dni[LEN];
	int telefono;
};

// Entrada al programa
int main() {
	struct datos persona1;

	/* Ojo con scanf! */
	printf("> ¿Cómo te llamas?\n");
	scanf("%256s", persona1.nombre);

	printf("> ¿Cuál es tu primer apellido?\n");
	scanf("%256s", persona1.apellido1);

	printf("> ¿Cuál es tu segundo apellido?\n");
	scanf("%256s", persona1.apellido2);

	printf("> ¿Cuál es tu DNI?\n");
	scanf("%10s", persona1.dni);

	printf("> ¿Cuál es tu teléfono?\n");
	scanf("%9d", &persona1.telefono);

	printf("> Hola %s %s %s!"
	       "\n\tDNI  = %s"
	       "\n\ttlfn = %d\n",
	       persona1.nombre, persona1.apellido1, persona1.apellido2,
	       persona1.dni, persona1.telefono);
}
