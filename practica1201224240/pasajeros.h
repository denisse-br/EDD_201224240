#ifndef PASAJEROS_H
#define PASAJEROS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct colapas{
int maletas;
int docs;
int turno;
int idpas;
struct colapas *nxtp;
}tipoPas;

typedef tipoPas *iniciop;

void insertarPas(int maletas,int docs,int turno, int id, iniciop *cola);

#endif // PASAJEROS_H
