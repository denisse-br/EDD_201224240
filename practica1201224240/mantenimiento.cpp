#include "mantenimiento.h"
#include "esperamantenimiento.h"
void insertarEstacion(listasimple *ls,int id, int idAvion, int estado, int restante){
    nodoM nuevo, actual;
    //Crear un nodo nuevo
    nuevo = (nodoM)malloc(sizeof(tipoMantenimiento));
    nuevo->id=id;
    nuevo->idAvion=idAvion;
    nuevo->estado=estado;
    nuevo->restantes=restante;
    nuevo->nxtman=NULL;
    //verificacion de lista vacio
    if(!*ls){
            *ls = nuevo;
        }else{
            actual=*ls;//actual es igual a la lista
            while(actual->nxtman!=NULL){//mientras el siguiente no sea nulo
                actual = actual->nxtman;//
            }
            actual->nxtman = nuevo;
        }
}

void modificarEstacion(listasimple *ls,int idAvion,int estado,int restante,iniciocp *c){
    nodoM aux=*ls;
    if((*ls)){
        while(aux!=NULL){
            if(aux->estado==0){
                if((*c)){
                    sacarC(c);
                }else{
                    aux->idAvion=idAvion;
                    aux->restantes=restante;
                    aux->estado=estado;
                    break;
                }
            }else{
            aux=aux->nxtman;
            }
        }
        if(aux==NULL){
            insertarColaP(idAvion,restante,c);
        }

    }
}
