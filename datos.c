#include <stdio.h>
#include "datos.h"

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
