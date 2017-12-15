#ifndef MANTENIMIENTO_H
#define MANTENIMIENTO_H
#include "esperamantenimiento.h"
#include <stdlib.h>
#include <stdio.h>
#include <QTextEdit>
typedef struct mantenimiento{
int id;
int idAvion;
int estado;
int restantes;
struct mantenimiento *nxtman;
}tipoMantenimiento;
typedef tipoMantenimiento *nodoM;
typedef tipoMantenimiento *listasimple;

void insertarEstacion(listasimple *ls, int id, int idAvion, int estado, int restante);
void modificarEstacion(listasimple *ls, int idAvion, int estado, int restante, iniciocp *c);
void restarMan(listasimple *ls,iniciocp *c);
void imprimirconsola(QTextEdit *consola, listasimple *ls);
#endif // MANTENIMIENTO_H
