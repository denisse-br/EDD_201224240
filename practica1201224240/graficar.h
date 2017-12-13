#ifndef GRAFICAR_H
#define GRAFICAR_H
#include "stdio.h"
#include "stdlib.h"
#include "avion.h"

class graficar
{
public:
    FILE *grafico;
    graficar(listadoble *ld);
    void graficardoble(listadoble *ld);
};

#endif // GRAFICAR_H
