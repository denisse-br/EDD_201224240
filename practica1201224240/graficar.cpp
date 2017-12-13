#include "graficar.h"

graficar::graficar(listadoble *ld,listasimple *ls)
{
    grafico = fopen("C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.dot", "w+");
    fprintf(grafico, "digraph{ \n rankdir=LR; \n node[shape = record, color = black];");
    fprintf(grafico, "subgraph clusterAeropuerto{ \n");
    fprintf(grafico, "label = \"AEROPUERTO\"; \n");

        fprintf(grafico,"\t  subgraph clusterAviones{ \n");
        fprintf(grafico,"\t  label = \"AVIONES\"; \n");
            graficardoble(ld);
     fprintf(grafico, "}\n");
     graficarsimple(ls);
     fprintf(grafico, "}\n");
     fclose(grafico);
     system("dot -Tjpg C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.dot -o C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.jpg");


}

void graficar::graficardoble(listadoble *ld){
    nodo avion=*ld;
    int nodo=0;

   if(avion!=NULL){

       while(avion!=NULL){
           if(avion->tipo==1){
               fprintf(grafico,"\t\t a%d[label=\"ID: %d\\n Tamaño: Pequeño\\n Pasajeros: %d\\n Turnos en mantenimiento: %d \"];\n",nodo, avion->id,avion->pasajeros,avion->mantenimiento);
           }else if(avion->tipo==2){
               fprintf(grafico,"\t\t a%d[label=\"ID: %d\\n Tamaño: Mediano\\n Pasajeros: %d\\n Turnos en mantenimiento: %d \"];\n",nodo, avion->id,avion->pasajeros,avion->mantenimiento);
           }
           else if(avion->tipo==3){
               fprintf(grafico,"\t\t a%d[label=\"ID: %d\\n Tamaño: Grande\\n Pasajeros: %d\\n Turnos en mantenimiento: %d \"];\n",nodo, avion->id,avion->pasajeros,avion->mantenimiento);
           }

           nodo++;
           avion=avion->nxt;
       }
       fprintf(grafico, "\t }");
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
       fprintf(grafico, "\t }");
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
