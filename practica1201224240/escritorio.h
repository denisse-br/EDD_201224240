#ifndef ESCRITORIO_H
#define ESCRITORIO_H
#include <stdlib.h>
#include <stdio.h>

typedef struct nodoEscritorio {
   char id;
   //colaEs colaEscritorio;
   //pilad pilaDocs;
   struct nodoEscritorio  *nxte;
   struct nodoEscritorio  *ante;
} tipoEscritorio;

typedef tipoEscritorio *nodoE;
typedef tipoEscritorio *listadobleE;

void insertarEscritorio(listadobleE *le,char id);
void mostrare(listadobleE *le);
bool existe(listadobleE *le,char val);
#endif // ESCRITORIO_H
