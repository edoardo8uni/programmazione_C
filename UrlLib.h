typedef struct {
    char url[100];
    int OraUltima;
    int MinutiUltima;
} Visita;

typedef struct nodo{
    Visita v;
    struct nodo* next;
} Nodo;

typedef Nodo* List;

//FUNZIONI
void NewList(List *pl);