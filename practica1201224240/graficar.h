#ifndef GRAFICAR_H
#define GRAFICAR_H
#include "stdio.h"
#include "stdlib.h"
#include "avion.h"
#include "mantenimiento.h"
#include "esperamantenimiento.h"
class graficar
{
public:
    FILE *grafico;
    graficar(listadoble *ld, listasimple *ls, iniciocp *c);
    void graficardoble(listadoble *ld);
    void graficarsimple(listasimple *ls);
    void graficacola(iniciocp *c);
};

#endif // GRAFICAR_H
