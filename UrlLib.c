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
     aux->v = v;
     aux->next = *pl;
     *pl = aux; 
}
void aggiorna(List *pl, Visita v){
    while(*pl && (*pl)->v.url == v.url){
        pl = &(*pl)->next;
    }
    if (*pl == NULL){
        InsTesta(pl,v);
    }
    (*pl)->n_visite++;
}