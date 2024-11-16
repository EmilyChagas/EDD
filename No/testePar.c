#include "lista.h"
#include <time.h>

int main (){
t_lista l;
    inicia_lista (&l);
    exibe_lista (&l, "lista depois de inicializada");
    insere_inicio (8, &l);
    insere_inicio (2, &l);
    insere_inicio (4, &l);
    exibe_lista (&l, "lista depois das insercoes de inicio");
    insere_fim (10, &l);
    insere_fim (5, &l);
    insere_fim (6, &l);
    exibe_lista (&l, "lista depois das insercoes de fim");
    printf ("\nos pares sao: %d\n", pares(&l));
    return 0;
}