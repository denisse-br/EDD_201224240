#include "mantenimiento.h"

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
