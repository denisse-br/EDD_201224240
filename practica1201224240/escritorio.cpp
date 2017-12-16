#include "escritorio.h"

void insertarEscritorio(listadobleE *le,char id){
    nodoE nuevo, actual;
    nuevo=(nodoE)malloc(sizeof(tipoEscritorio));
    nuevo->id=id;
    actual=*le;
    if(!(*le)){//vacia
        nuevo->nxte=NULL;
        nuevo->ante=NULL;
        *le=nuevo;
    }else{
        if(id< (*le)->id){//inicio
            nuevo->nxte=(*le);
            (*le)->ante=nuevo;
            *le=nuevo;
        }else{
            nodoE aux=(*le);
            while (aux->nxte!=NULL) {
                if(aux->id<id&&aux->nxte->id>id){
                    break;
                }
                aux=aux->nxte;
            }
            if(aux->nxte==NULL){
                aux->nxte=nuevo;
                nuevo->ante=aux;
            }else{
                nuevo->nxte=aux->nxte;
                nuevo->ante=aux;
                aux->nxte->ante=nuevo;
                aux->nxte=nuevo;
            }
        }
    }
}

void mostrare(listadobleE *le){
    nodoE actual=*le;
    if(!(*le)){
        printf("\nlista vacia\n");
    }else{
        printf("escritorios: \n");
        while (actual!=NULL) {
            printf("%c\n",actual->id);
            actual=actual->nxte;
        }
    }
}


bool existe(listadobleE *le,char val){
    nodoE actual=*le;
    if(!(*le)){
        return false;
    }else{
        while(actual!=NULL){
            if(actual->id==val){
                return true;
            }
            actual=actual->nxte;
        }
    }
}
