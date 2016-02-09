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

void pregunta_datos(struct datos *persona);
void imprime_datos(struct datos *persona);

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

void pregunta_datos(struct datos *persona)
{
	/* Ojo con scanf! */
	printf("> ¿Cómo te llamas?\n");
	scanf("%256s", persona->nombre);

	printf("> ¿Cuál es tu primer apellido?\n");
	scanf("%256s", persona->apellido1);

	printf("> ¿Cuál es tu segundo apellido?\n");
	scanf("%256s", persona->apellido2);

	printf("> ¿Cuál es tu DNI?\n");
	scanf("%10s", persona->dni);

	printf("> ¿Cuál es tu teléfono?\n");
	scanf("%9d", &persona->telefono);
}

void imprime_datos(struct datos *persona)
{
	printf("> Hola %s %s %s!"
	       "\n\tDNI  = %s"
	       "\n\ttlfn = %d\n",
	       persona->nombre, persona->apellido1, persona->apellido2,
	       persona->dni, persona->telefono);
}
