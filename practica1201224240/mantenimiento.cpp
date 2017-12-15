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
    iniciocp auxc;
    if((*ls)){
        while(aux!=NULL){
            if(aux->estado==0){
                if((*c)){
                    auxc=sacarC(c);
                    if(auxc!=NULL){
                        aux->idAvion=auxc->idavion;
                        aux->estado=1;
                        aux->restantes=auxc->turnos;
                        printf("\nid avion %d\n turnos restantes %d",aux->idAvion,aux->restantes);
                    }else{
                        printf("nodo nulo");
                    }
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


void restarMan(listasimple *ls, iniciocp *c){
    nodoM aux=*ls;
    iniciocp auxc;
    if((*ls)){
        while(aux!=NULL){
            if(aux->estado==1){
                if(aux->restantes==1){
                    aux->idAvion=0;
                    aux->estado=0;
                    aux->restantes=0;
                    auxc=sacarC(c);
                    if(auxc!=NULL){
                        aux->idAvion=auxc->idavion;
                        aux->restantes=auxc->turnos;
                        aux->estado=1;
                    }else{
                        printf("nodo nulo");
                    }
                }else{
                aux->restantes=aux->restantes-1;
                }
            }
            aux=aux->nxtman;
        }
    }
}


void imprimirconsola(QTextEdit *consola, listasimple *ls){
    consola->append("****INFORMACION ESTACION DE MANTENIMIENTO****");
    if((*ls)){
        nodoM aux=*ls;
        while(aux!=NULL){
            consola->append("ID estacion: "+QString::number(aux->id));
            if(aux->estado==0){
                consola->append("\tEstado: Disponible");
            }else{
                consola->append("\tEstado: Ocupado");
            }
            if(aux->idAvion==0){
                consola->append("\tID avion: Ninguno ");
            }else{
                consola->append("\tID avion: "+QString::number(aux->idAvion));
            }

            consola->append("\tTurnos restantes: "+QString::number(aux->restantes));
            aux=aux->nxtman;
        }
    }
}
