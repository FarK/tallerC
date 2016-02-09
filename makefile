all: holamundo

holamundo: holamundo.o datos.o
	gcc holamundo.o datos.o -o holamundo

holamundo.o: holamundo.c
	gcc -c holamundo.c

datos.o: datos.c datos.h
	gcc -c datos.c
