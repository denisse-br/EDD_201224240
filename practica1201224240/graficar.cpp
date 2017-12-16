#include "graficar.h"

graficar::graficar(listadoble *ld, listasimple *ls, iniciocp *c, iniciop *p, listacircular *lc, listadobleE *lde)
{
    grafico = fopen("C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.dot", "w+");
    fprintf(grafico, "digraph{\n node[shape = record, color = black];");
    fprintf(grafico, "subgraph clusterAeropuerto{ \n");
    fprintf(grafico, "label = \"AEROPUERTO\"; \n");
    graficardoble(ld);
    graficarsimple(ls);
    graficacola(c);
    graficarcolap(p);
    graficarM(lc);
    graficarE(lde);
    fprintf(grafico, "}\n");
    fprintf(grafico, "}\n");
    fclose(grafico);
    system("dot -Tjpg C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.dot -o C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.jpg");


}

void graficar::graficardoble(listadoble *ld){
    nodo avion=*ld;
    int nodo=0;
    fprintf(grafico,"\t  subgraph clusterAviones{ \n");
    fprintf(grafico,"\t  label = \"AVIONES\"; \n");
   if(avion!=NULL){

       while(avion!=NULL){
           if(avion->tipo==1){
               fprintf(grafico,"\t\t a%d[label=\"ID avion: %d\\n Tamaño: Pequeño\\n Pasajeros: %d\\n Turnos en mantenimiento: %d \"];\n",nodo, avion->id,avion->pasajeros,avion->mantenimiento);
           }else if(avion->tipo==2){
               fprintf(grafico,"\t\t a%d[label=\"ID avion: %d\\n Tamaño: Mediano\\n Pasajeros: %d\\n Turnos en mantenimiento: %d \"];\n",nodo, avion->id,avion->pasajeros,avion->mantenimiento);
           }
           else if(avion->tipo==3){
               fprintf(grafico,"\t\t a%d[label=\"ID avion: %d\\n Tamaño: Grande\\n Pasajeros: %d\\n Turnos en mantenimiento: %d \"];\n",nodo, avion->id,avion->pasajeros,avion->mantenimiento);
           }

           nodo++;
           avion=avion->nxt;
       }
       fprintf(grafico, "}\n");
       for(int i=0;i<nodo;i++){
           if(i == 0 && i != nodo-1){
               fprintf(grafico,"a%d->a%d\n", i, i+1);
           }else if(i != nodo-1){
               fprintf(grafico,"a%d->a%d\n", i, i+1);
               fprintf(grafico,"a%d->a%d\n", i, i-1);
           }else{
               if(i == nodo-1 && i != 0){
                   fprintf(grafico,"a%d->a%d\n", i, i-1);
               }
           }
       }




   }else{
       fprintf(grafico, "}\n");
   }

}


void graficar::graficarsimple(listasimple *ls){
     nodoM estacion=*ls;
     int nodo=0;
        if(estacion!=NULL){
            fprintf(grafico,"\t  subgraph clusterlistaSim{ \n");
            fprintf(grafico,"\t  label = \"ESTACIONES DE MANTENIMIENTO\"; \n");
            while(estacion!=NULL){
                fprintf(grafico,"\t\t b%d[label=\"ID estacion: %d\\n", nodo,estacion->id);
                if(estacion->estado==0){
                    fprintf(grafico,"Estado: Disponible\\n");
                }else{
                    fprintf(grafico,"Estado: Ocupado\\n");
                }
                if(estacion->idAvion==0){
                    fprintf(grafico,"No hay avion asignado \\n");
                }else{
                    fprintf(grafico,"Avion atendido: %d\\n",estacion->idAvion);
                }
                fprintf(grafico,"Turnos restantes: %d\"];\n", estacion->restantes);
                nodo++;
                estacion=estacion->nxtman;
            }

            for(int i=0;i<nodo;i++){
                if(i!=nodo-1){
                   fprintf(grafico,"b%d->b%d[constraint=true];\n", i, i+1);
                }

            }
            fprintf(grafico, "\t }");
        }


}

void graficar::graficacola(iniciocp *c){
    iniciocp actual=*c;
    int nodo=0;
    fprintf(grafico,"\t  subgraph clusterlistaCola{ \n");
    fprintf(grafico,"\t  label = \"COLA DE ESPERA\"; \n");
    if(actual!=NULL){
        while (actual!=NULL) {
               fprintf(grafico,"\t\t c%d[label=\"ID avion: %d\\nTurnos a Esperar: %d\\n \"];\n",nodo, actual->idavion,actual->turnos);

            nodo++;
            actual=actual->nxtc;
        }
        for(int i=0;i<nodo;i++){
            if(i!=nodo-1){
               fprintf(grafico,"c%d->c%d\n",  i, i+1);
            }

        }
    }
    fprintf(grafico, "\t }");
}

void graficar::graficarcolap(iniciop *p){
    iniciop actual=*p;
    int nodo=0;
    fprintf(grafico,"\t  subgraph clusterlistaColaPas{ \n");
    fprintf(grafico,"\t  label = \"COLA DE PASAJEROS \"; \n");
    if(actual!=NULL){
        while (actual!=NULL) {
               fprintf(grafico,"\t\t c%d[label=\"ID pasajero: %d\\nMaletas: %d\\nDocumentos: %d\\nTurnos a Esperar: %d\\n \"];\n",nodo, actual->idpas,actual->maletas,actual->docs,actual->turno);
            nodo++;
            actual=actual->nxtp;
        }
        for(int i=0;i<nodo;i++){
            if(i!=nodo-1){
               fprintf(grafico,"c%d->c%d\n",  i, i+1);
            }

        }
    }
    fprintf(grafico, "\t }");
}

void graficar::graficarM(listacircular *lcs){
    nodocircular inicio=*lcs, aux=*lcs;
    int nodo=0;
    fprintf(grafico,"\t  subgraph clusterlistamaleta{ \n");
    fprintf(grafico,"\t  label = \"MALETAS\"; \n");

    if(inicio!=NULL){
        fprintf(grafico,"\t\t d%d[label=\"ID pasajero: %d\\n Maleta#: %d\"];\n",nodo, aux->idpasajero,aux->nummaleta);
        do{
            fprintf(grafico,"\t\t d%d[label=\"ID pasajero: %d\\n Maleta#: %d\"];\n",nodo, aux->idpasajero,aux->nummaleta);
            nodo++;
            aux = aux->nextcir;
        }while(aux != *lcs);
        for(int i=0;i<=nodo/2;i++){
            fprintf(grafico,"{rank=same d%d; d%d;}\n",i,nodo-1-i);
        }
        for(int i = 0; i <= nodo-1; i++){
            if(i == nodo-1){
                fprintf(grafico, "\t\t d%d->d%d[constraint=true];\n", i, 0);
                fprintf(grafico, "\t\t d%d->d%d[constraint=true];\n", 0, i);
            }else{
                fprintf(grafico, "\t\t d%d->d%d[constraint=true];\n", i, i+1);
                fprintf(grafico, "\t\t d%d->d%d[constraint=true];\n", i+1, i);
            }
        }
        fprintf(grafico, "\t }");


    }else{
        fprintf(grafico, "\t }");
    }
}


void graficar::graficarE(listadobleE *ld){
    nodoE escritorio=*ld;
    int nodo=0;
    fprintf(grafico,"\t  subgraph clusterEscritorios{ \n");
    fprintf(grafico,"\t  label = \"ESCRITORIOS\"; \n");
   if(escritorio!=NULL){

       while(escritorio!=NULL){
          fprintf(grafico,"\t\t e%d[label=\"ID escritorio: %c\\n \"];\n",nodo, escritorio->id);
          nodo++;
          escritorio=escritorio->nxte;
       }
       fprintf(grafico, "}\n");
       for(int i=0;i<nodo;i++){
           if(i == 0 && i != nodo-1){
               fprintf(grafico,"e%d->e%d\n", i, i+1);
           }else if(i != nodo-1){
               fprintf(grafico,"e%d->e%d\n", i, i+1);
               fprintf(grafico,"e%d->e%d\n", i, i-1);
           }else{
               if(i == nodo-1 && i != 0){
                   fprintf(grafico,"e%d->e%d\n", i, i-1);
               }
           }
       }




   }else{
       fprintf(grafico, "}\n");
   }

}
