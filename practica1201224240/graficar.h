#ifndef GRAFICAR_H
#define GRAFICAR_H
#include "stdio.h"
#include "stdlib.h"
#include "avion.h"
#include "mantenimiento.h"
#include "esperamantenimiento.h"
#include "pasajeros.h"
class graficar
{
public:
    FILE *grafico;
    graficar(listadoble *ld, listasimple *ls, iniciocp *c, iniciop *p);
    void graficardoble(listadoble *ld);
    void graficarsimple(listasimple *ls);
    void graficacola(iniciocp *c);
    void graficarcolap(iniciop *p);
};

#endif // GRAFICAR_H
