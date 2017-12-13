#include "avion.h"

void insertar(listadoble *l, int id, int tam, int pasajero, int turno, int servicio){
nodo nuevo, actual;
nuevo=(nodo)malloc(sizeof(tipoAvion));
nuevo->id=id;
nuevo->tipo=tam;
nuevo->pasajeros=pasajero;
nuevo->turnos=turno;
nuevo->mantenimiento=servicio;
actual=*l;
if(!(*l)){//vacia
    nuevo->nxt=NULL;
    nuevo->ant=NULL;
    *l=nuevo;
}else{
    while (actual->nxt!=NULL) {
        actual=actual->nxt;
    }
    actual->nxt=nuevo;
    nuevo->ant=actual;
    nuevo->nxt=NULL;
}
}
void mostrar(listadoble *l){
    nodo actual=*l;
    if(!(*l)){
        printf("\nlista vacia\n");
    }else{
        printf("ELEMENTOS DE LA LISTA: \n");
        while (actual!=NULL) {
            printf("%d\n",actual->tipo);
            actual=actual->nxt;
        }
    }
}

void borrar(listadoble *l){
nodo pivote=*l;
    if(!(*l)){
        printf("lista vacia, nada que eliminar\n");
    }else{
        while(pivote!=NULL){
            if(pivote->turnos==0){
                printf("elemento encontrado\n");
                if(pivote==*l &&pivote->nxt==NULL){//1 elemento
                    *l=NULL;
                }else if(pivote==*l){//principio
                    *l=pivote->nxt;
                    (*l)->ant=NULL;
                    free(pivote);
                }
                printf("elemento eliminado\n");
                break;
            }
            else{
                pivote=pivote->nxt;
            }
        }
        printf("elemento a eliminar no encontrado\n");
    }
}

void restar(listadoble *l){
    nodo aux=*l;
    if((*l)){
        if(aux->ant==NULL){
            if(aux->turnos>0){
                aux->turnos=aux->turnos-1;
                printf("id: %d ",aux->id);
                printf("turno: %d\n",aux->turnos);
            }
            else if(aux->turnos==0){
                nodo pivote=*l;
                    if(!(*l)){
                        printf("lista vacia, nada que eliminar\n");
                    }else{
                        while(pivote!=NULL){
                            if(pivote->turnos==0){
                                printf("elemento encontrado\n");
                                if(pivote==*l &&pivote->nxt==NULL){//1 elemento
                                    *l=NULL;
                                }else if(pivote==*l){//principio
                                    *l=pivote->nxt;
                                    (*l)->ant=NULL;
                                    free(pivote);
                                }
                                printf("elemento eliminado\n");
                                break;
                            }
                            else{
                                pivote=pivote->nxt;
                            }
                        }
                        printf("elemento a eliminar no encontrado\n");
                    }
            }

        }
    }
}
