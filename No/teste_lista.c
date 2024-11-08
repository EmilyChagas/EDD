#include "lista.h"

int main () {
    t_lista l;
    inicia_lista (&l);
    exibe_lista (&l, "lista depois de inicializada");
    insere_inicio (1, &l);
    insere_inicio (2, &l);
    insere_inicio (3, &l);
    exibe_lista (&l, "lista depois das insercoes de inicio");
    insere_fim (4, &l);
    insere_fim (5, &l);
    insere_fim (6, &l);
    exibe_lista (&l, "lista depois das insercoes de fim");
    int primeiro_elemento = remove_inicio (&l);
    printf ("\n%d saiu do inicio", primeiro_elemento);
    exibe_lista (&l, "lista depois da remocao de inicio");
    int ultimo_elemento = remove_fim (&l);
    printf ("\n%d saiu do fim da lista", ultimo_elemento);
    exibe_lista (&l, "lista depois da remocao de fim");
    printf ("\ntamanho da lista: %d\n", tamanho_lista (&l));
    printf ("\nsoma dos valores: %d\n", soma_valores (&l));
    return 0;
}