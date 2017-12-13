#ifndef MANTENIMIENTO_H
#define MANTENIMIENTO_H

#include <stdlib.h>
#include <stdio.h>

typedef struct mantenimiento{
int id;
int idAvion;
int estado;
int restantes;
struct mantenimiento *nxtman;
}tipoMantenimiento;
typedef tipoMantenimiento *nodoM;
typedef tipoMantenimiento *listasimple;

void insertarEstacion(listasimple *ls,int id, int idAvion, int estado, int restante);

#endif // MANTENIMIENTO_H
