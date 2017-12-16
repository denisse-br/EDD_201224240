#include "colaescritorio.h"

void insertarColaE(int idpa,int turnos,int docs, inicioce *cola){
    inicioce nuevo;
    //Crear un nodo nuevo
    nuevo = (inicioce)malloc(sizeof(tipoColaE));
    nuevo->idpas=idpa;
    nuevo->turno=turnos;
    nuevo->docs=docs;
    nuevo->nxtce=NULL;
    //verificacion de lista vacio
    if(*cola == NULL){
    *cola=nuevo;
    }
    else{
        inicioce reco = *cola;
        while(reco->nxtce!=NULL){
            reco=reco->nxtce;
        }

        reco->nxtce =nuevo;
        //*cola=nuevo;
    }
}

inicioce sacarC(inicioce *ultimo){
    if((*ultimo)!=NULL){
        inicioce aux=*ultimo;
        *ultimo=(*ultimo)->nxtce;
        aux->nxtce=NULL;
        return aux;
    }
    return NULL;
}
