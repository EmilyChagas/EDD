#include "lista.h"
#include <time.h>

void Ordenar(t_lista *l) {
    if (lista_vazia(l) || l->primeiro->proximo == NULL) {
        return;
    }

    for (t_no *i = l->primeiro; i != NULL; i = i->proximo) {
        for (t_no *j = i->proximo; j != NULL; j = j->proximo) {
            if (i->info > j->info) {
                int aux = i->info;
                i->info = j->info;
                j->info = aux;
            }
        }
    }
}

int main (){
t_lista l;
    inicia_lista (&l);
    insere_inicio (8, &l);
    insere_inicio (2, &l);
    insere_inicio (4, &l);
    insere_fim (10, &l);
    insere_fim (5, &l);
    insere_fim (6, &l);
    exibe_lista (&l, "lista");
    Ordenar(&l);
    exibe_lista (&l, "lista depois de ordenar");
    
    return 0;
}