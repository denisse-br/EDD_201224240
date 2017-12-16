#include "pasajeros.h"

void insertarPas( int id,int maletas,int docs,int turno, iniciop *cola){
    iniciop nuevo;
    //Crear un nodo nuevo
    nuevo = (iniciop)malloc(sizeof(tipoPas));
    nuevo->idpas=id;
    nuevo->maletas=maletas;
    nuevo->docs=docs;
    nuevo->turno=turno;
    nuevo->nxtp=NULL;
    //verificacion de lista vacio
    if(*cola == NULL){
    *cola=nuevo;
    }
    else{
        iniciop reco = *cola;
        while(reco->nxtp!=NULL){
            reco=reco->nxtp;
        }
        reco->nxtp=nuevo;
        //*cola=nuevo;
    }
}

int pasajeros(iniciop *cola){
    iniciop aux=*cola;
    int contador=1;
    if((*cola)){
        while(aux->nxtp!=NULL){
            contador++;
            aux=aux->nxtp;
            printf("\ncontador: %d",contador);
        }
    }
    return contador;
}
