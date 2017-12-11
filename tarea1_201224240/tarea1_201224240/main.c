#include <stdlib.h>
#include <stdio.h>
typedef struct nodold {
   int valor;
   struct nodold  *nxt;
   struct nodold  *ant;
} tipoNodo;

typedef tipoNodo *nodo;
typedef tipoNodo *ld;

void insertar(ld *l, int v);
void borrar(ld *l, int v);
void mostrar(ld *l);

int main(){
    ld listadoble=NULL;
    nodo nuevo;
    int opcion=0;
    int valor=0;
    printf("Ingrese el numero de opcion que desea:\n1. insertar\n2.eliminar\n3.mostrar la lista\n");
    scanf("%d",&opcion);
    while(opcion<4){
    if(opcion==1){
        printf("ingrese el valor que desea agregar: ");
        scanf("%d",&valor);
        insertar(&listadoble, valor);
    }else if(opcion==2){

    }else if(opcion==3){
        mostrar(&listadoble);
    }
    printf("Ingrese el numero de opcion que desea:\n1. insertar\n2.eliminar\n3.mostrar la lista\n");
    scanf("%d",&opcion);
    }
return 0;
}
void insertar(ld *l, int v){
nodo nuevo, actual;
nuevo=(nodo)malloc(sizeof(tipoNodo));
nuevo->valor=v;
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
void mostrar(ld *l){
    nodo actual=*l;
    if(!(*l)){
        printf("\nlista vacia\n");
    }else{
        printf("ELEMENTOS DE LA LISTA: \n");
        while (actual->nxt!=NULL) {
            printf("%d\n",actual->valor);
            actual=actual->nxt;
        }
        printf("%d\n",actual->valor);
    }
}
