#ifndef AVION_H
#define AVION_H


#include <stdlib.h>
#include <stdio.h>
typedef struct nodoAvion {
   int tipo;
   int pasajeros;
   int turnos;
   int mantenimiento;
   struct nodoAvion  *nxt;
   struct nodoAvion  *ant;
} tipoAvion;

typedef tipoAvion *nodo;
typedef tipoAvion *listadoble;

void insertar(listadoble *l, int tam, int pasajero, int turno, int servicio);
void borrar(listadoble *l);
void mostrar(listadoble *l);

#endif // AVION_H
