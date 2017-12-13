#ifndef ESPERAMANTENIMIENTO_H
#define ESPERAMANTENIMIENTO_H
#include <stdlib.h>
#include <stdio.h>

typedef struct colaespera{
int idavion;
int turnos;
struct colaespera *nxtc;
}tipoCola;

typedef tipoCola *iniciocp;
//typedef tipoCola *cola;

void insertarColaP(int idavion,int turnos, iniciocp *cola);
void sacarC(iniciocp *ultimo);
#endif // ESPERAMANTENIMIENTO_H
