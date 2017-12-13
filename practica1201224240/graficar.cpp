#include "graficar.h"

graficar::graficar(listadoble *ld)
{
    grafico = fopen("C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.dot", "w+");
    fprintf(grafico, "digraph{ \n rankdir=LR; \n node[shape = record, color = black];");
    fprintf(grafico, "subgraph clusterAeropuerto{ \n");
    fprintf(grafico, "label = \"AEROPUERTO\"; \n");

        fprintf(grafico,"\t  subgraph clusterAviones{ \n");
        fprintf(grafico,"\t  label = \"AVIONES\"; \n");
            graficardoble(ld);
     fprintf(grafico, "}\n");
     fprintf(grafico, "}\n");
     fclose(grafico);
     system("dot -Tjpg C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.dot -o C:/Users/Denissebr/Desktop/EDD_201224240/practica1201224240/reportes/Grafica.jpg");


}

void graficar::graficardoble(listadoble *ld){
    nodo avion=*ld;
    int nodo=0;

   if(avion!=NULL){

       while(avion!=NULL){
           fprintf(grafico,"\t\t a%d[label=\"%d\"];\n",nodo, avion->id);
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
