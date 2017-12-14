#include "esperamantenimiento.h"


void insertarColaP(int idavion,int turnos, iniciocp *cola){
iniciocp nuevo;
//Crear un nodo nuevo
nuevo = (iniciocp)malloc(sizeof(tipoCola));
nuevo->idavion=idavion;
nuevo->turnos=turnos;
nuevo->nxtc=NULL;
//verificacion de lista vacio
if(*cola == NULL){
*cola=nuevo;
}
else{
    iniciocp reco = *cola;
    while(reco->nxtc!=NULL){
        reco=reco->nxtc;
    }

    reco->nxtc=nuevo;
    //*cola=nuevo;
}
}

iniciocp sacarC(iniciocp *primer){

    if((*primer)->nxtc!=NULL){
        iniciocp aux=*primer;
        *primer=(*primer)->nxtc;
        aux->nxtc=NULL;
        return aux;
    }else{
        *primer=NULL;
        return NULL;
    }



}
