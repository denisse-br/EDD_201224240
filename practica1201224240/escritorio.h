#ifndef ESCRITORIO_H
#define ESCRITORIO_H
#include <stdlib.h>
#include <stdio.h>
#include <QTextEdit>
typedef struct nodoEscritorio {
   char id;
   int idPas;
   int turnos;
   //colaEs colaEscritorio;
   //pilad pilaDocs;
   struct nodoEscritorio  *nxte;
   struct nodoEscritorio  *ante;
} tipoEscritorio;

typedef tipoEscritorio *nodoE;
typedef tipoEscritorio *listadobleE;

void insertarEscritorio(listadobleE *le,char id, int idPas,int turno);
void mostrare(listadobleE *le);
bool existe(listadobleE *le,char val);
void imprimirconsolaE(QTextEdit *consola, listadobleE *le);
#endif // ESCRITORIO_H
