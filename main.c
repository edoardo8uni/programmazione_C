#include <stdio.h>
#include <stdlib.h>
#include "UrlLib.h"

int main(int argc, char* argv[]){

        FILE *f;
        Visita v;
        List l;
        
            f =fopen(argv[1],"rb");
            if(f == NULL)
                printf("errore nell' apertura di %s", argv[1]);
        while(fread(&v,sizeof(Visita),1,f) == 1){
            //printf("%s", v.url);
                aggiorna(&l,v);
        }
//stampa(l);


}