#ifndef MALETAS_H
#define MALETAS_H
#include <stdlib.h>
#include <stdio.h>

typedef struct maletas{
int idpasajero;
int nummaleta;
struct maletas *nextcir;
struct maletas *anteriorcir;
}tipoCircular;

typedef tipoCircular *nodocircular;
typedef tipoCircular *listacircular;

void insertar(int id, int num, listacircular *listac);
#endif // MALETAS_H
