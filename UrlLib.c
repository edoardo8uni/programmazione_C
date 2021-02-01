#include "UrlLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void NewList(List *pl){
    *pl = NULL;
}
void InsTesta(List *pl, Visita v){
     Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
     aux->n_visite = 0;
     aux->Ore = 0;
     aux->Min = 0;
     aux->v = v;
     aux->next = *pl;
     *pl = aux; 
}
void aggiorna(List *pl, Visita v){
    while(*pl && strcmp((*pl)->v.url, v.url) != 0){
        pl = &(*pl)->next;
    }
        if (*pl == NULL){
            printf("cia");
           InsTesta(pl,v);
                     }

   (*pl)->n_visite +=1;
}

void stampa(List l){
    while(l){
        if(l->n_visite >= 5)
            printf("%s %d\n", l->v.url, l->n_visite);
        l = l->next;
    }
}
int criterio(int ora1, int ora2, int minuti1, int minuti2){  
    //se v1 prima di v2 ritorna 1 
    if (ora1 < ora2)
        return 1;
    if (ora1 == ora2 && minuti1 < minuti2)
        return 1;
    else return 0;
}

void tempi(List *pl, Visita v){

        if( criterio((*pl)->Ore, v.OraUltima, (*pl)->Min, v.MinutiUltima) == 1){
            (*pl)->Min = v.MinutiUltima;
            (*pl)->Ore = v.OraUltima;
        }

    }
