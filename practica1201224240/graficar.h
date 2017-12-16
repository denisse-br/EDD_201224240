#ifndef GRAFICAR_H
#define GRAFICAR_H
#include "stdio.h"
#include "stdlib.h"
#include "avion.h"
#include "mantenimiento.h"
#include "esperamantenimiento.h"
#include "pasajeros.h"
#include "maletas.h"
#include "escritorio.h"
class graficar
{
public:
    FILE *grafico;
    graficar(listadoble *ld, listasimple *ls, iniciocp *c, iniciop *p,listacircular *lc,listadobleE *lde);
    void graficardoble(listadoble *ld);
    void graficarsimple(listasimple *ls);
    void graficacola(iniciocp *c);
    void graficarcolap(iniciop *p);
    void graficarM(listacircular *lcs);
    void graficarE(listadobleE *ld);
};

#endif // GRAFICAR_H
