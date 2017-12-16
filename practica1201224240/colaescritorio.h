#ifndef COLAESCRITORIO_H
#define COLAESCRITORIO_H
#include <stdlib.h>
#include <stdio.h>

typedef struct colaEs{
int idpas;
int turno;
int docs;
struct colaEs *nxtce;
}tipoColaE;

typedef tipoColaE *inicioce;
//typedef tipoCola *cola;

void insertarColaE(int idpa,int turnos,int docs, inicioce *cola);
void sacarC(inicioce *ultimo);
#endif // COLAESCRITORIO_H
