/*
 * Los includes de la librería estándar nos proveen de funciones básicas
 */
// STanDandard Input-Output: funciones para el manejo de entrada-salida
#include <stdio.h>

// Macros del preprocesador
#define LEN 256

enum tipos_datos {
	NOMBRE = 0,
	APELLIDO1,
	APELLIDO2,
	DNI,
	TLFNO
};

// Entrada al programa
int main() {
	char datos[5][LEN];

	/* Ojo con scanf! */
	printf("> ¿Cómo te llamas?\n");
	scanf("%256s", datos[NOMBRE]);

	printf("> ¿Cuál es tu primer apellido?\n");
	scanf("%256s", datos[APELLIDO1]);

	printf("> ¿Cuál es tu segundo apellido?\n");
	scanf("%256s", datos[APELLIDO2]);

	printf("> ¿Cuál es tu DNI?\n");
	scanf("%10s", datos[DNI]);

	printf("> ¿Cuál es tu teléfono?\n");
	scanf("%9s", datos[TLFNO]);

	printf("> Hola %s %s %s!"
	       "\n\tDNI  = %s"
	       "\n\ttlfn = %s\n",
	       datos[NOMBRE], datos[APELLIDO1], datos[APELLIDO2],
	       datos[DNI], datos[TLFNO]);
}
