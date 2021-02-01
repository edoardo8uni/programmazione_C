typedef struct {
    char url[100];
    int OraUltima;
    int MinutiUltima;
} Visita;

typedef struct nodo{
    Visita v;
    int n_visite;
    struct nodo* next;
} Nodo;

typedef Nodo* List;

//FUNZIONI
void NewList(List *pl);
void aggiorna(List *pl, Visita v);