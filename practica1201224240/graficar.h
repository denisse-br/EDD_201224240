#ifndef GRAFICAR_H
#define GRAFICAR_H
#include "stdio.h"
#include "stdlib.h"
#include "avion.h"
#include "mantenimiento.h"
class graficar
{
public:
    FILE *grafico;
    graficar(listadoble *ld, listasimple *ls);
    void graficardoble(listadoble *ld);
    void graficarsimple(listasimple *ls);
};

#endif // GRAFICAR_H
