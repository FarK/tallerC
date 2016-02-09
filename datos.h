#ifndef DATOS_H_
#define DATOS_H_

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

#endif
