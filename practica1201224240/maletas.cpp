#include "maletas.h"

void insertarm(int id, int num, listacircular *listac){
    nodocircular nuevo, actual=*listac;
    nuevo= (nodocircular)malloc(sizeof(tipoCircular));
    nuevo->idpasajero=id;
    nuevo->nummaleta=num;
    //printf(nombreAr);
    //printf(nuevo->nombreArtista);
    if(*listac==NULL){

        *listac=nuevo;
        nuevo->nextcir=nuevo;
        nuevo->anteriorcir=nuevo;

    }else{
            //printf("ingreso");

            do{
                actual=actual->nextcir;
            }while(actual!=*listac);
            nuevo->anteriorcir=actual->anteriorcir;
            nuevo->nextcir=*listac;
            actual->anteriorcir->nextcir=nuevo;
            actual->anteriorcir=nuevo;


    }
}

void borrar(listacircular *l, int v){
nodocircular pivote=*l;
    if(!(*l)){
        printf("lista vacia, nada que eliminar\n");
    }else{
        while(pivote!=NULL){
            if(pivote->idpasajero==v){
                printf("elemento encontrado\n");
                if(pivote==*l &&pivote->nextcir==NULL){//1 elemento
                    *l=NULL;
                }else if(pivote==*l){//principio
                    *l=pivote->nextcir;
                    (*l)->anteriorcir=NULL;
                    free(pivote);
                }else{//el resto
                    if(pivote->nextcir==NULL){
                        pivote->anteriorcir->nextcir=NULL;
                        free(pivote);
                    }else{
                        pivote->anteriorcir->nextcir=pivote->nextcir;
                        pivote->nextcir->anteriorcir=pivote->anteriorcir;
                        free(pivote);
                    }
                }
                printf("elemento eliminado\n");

            }
            else{
                pivote=pivote->nextcir;
            }
        }
        printf("elemento a eliminar no encontrado\n");
    }
}
