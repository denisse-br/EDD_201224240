#include "escritorio.h"
#include "string.h"

void insertarEscritorio(listadobleE *le, char id, int idPas, int turno){
    nodoE nuevo, actual;
    nuevo=(nodoE)malloc(sizeof(tipoEscritorio));
    nuevo->id=id;
    nuevo->idPas=idPas;
    nuevo->turnos=turno;
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
                nuevo->nxte=NULL;
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
            printf("ID %c\n Pasajeros: %d\n Turnos: %d",actual->id,actual->idPas,actual->turnos);
            actual=actual->nxte;
        }
    }
}


bool existe(listadobleE *le,char val){
    nodoE actual=*le;
    if(!(*le)){
        return false;
    }else{
        printf("\nentro else");
        while(actual!=NULL){
            if((int)actual->id==(int)val){
                printf("se encontro igual");
                return true;
            }
            actual=actual->nxte;
        }
        return false;
    }
}

void imprimirconsolaE(QTextEdit *consola, listadobleE *le){
    consola->append("****INFORMACION DE ESCRITORIOS****");
    if((*le)){
        nodoE aux=*le;
        while(aux!=NULL){
            if(aux->idPas==0){
                consola->append("ID escritorio "+QString(aux->id)+": Disponible");
            }else{
                consola->append("ID escritorio "+QString(aux->id)+": Ocupado");
                consola->append("\tID Pasajero: "+QString::number(aux->idPas));
            }
            if(aux->turnos==0){
                consola->append("\tTurnos: Ninguno ");
            }else{
                consola->append("\tTurnos: "+QString::number(aux->turnos));
            }
            aux=aux->nxte;
        }
    }
}

void asignar(){

}
