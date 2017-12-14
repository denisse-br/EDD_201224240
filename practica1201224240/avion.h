#ifndef AVION_H
#define AVION_H
#include <stdlib.h>
#include <stdio.h>
#include "mantenimiento.h"
#include "esperamantenimiento.h"
typedef struct nodoAvion {
   int id;
   int tipo;
   int pasajeros;
   int turnos;
   int mantenimiento;
   struct nodoAvion  *nxt;
   struct nodoAvion  *ant;
} tipoAvion;

typedef tipoAvion *nodo;
typedef tipoAvion *listadoble;

void insertar(listadoble *l,int id, int tam, int pasajero, int turno, int servicio);
void borrar(listadoble *l);
void mostrar(listadoble *l);
void restar(listadoble *l, listasimple *ls, iniciocp *c);
bool vacia(listadoble *l);

#endif // AVION_H
