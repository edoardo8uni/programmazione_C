typedef struct {
    char url[100];
    int OraUltima;
    int MinutiUltima;
} Visita;

typedef struct nodo{
    Visita v;
    int Ore,Min;
    int n_visite;
    struct nodo* next;
} Nodo;

typedef Nodo* List;

//FUNZIONI
void NewList(List *pl);
void aggiorna(List *pl, Visita v);
void stampa(List l);
int criterio(int ora1, int ora2, int minuti1, int minuti2);