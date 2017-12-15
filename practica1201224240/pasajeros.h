#ifndef PASAJEROS_H
#define PASAJEROS_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct colapas{
int maletas;
int docs;
int turno;
int idpas;
struct colapas *nxtp;
}tipoPas;

typedef tipoPas *iniciop;

void insertarPas(int id, int maletas, int docs, int turno, iniciop *cola);
iniciop sacarPas(iniciop *cola);
int pasajeros(iniciop *cola);
#endif // PASAJEROS_H
