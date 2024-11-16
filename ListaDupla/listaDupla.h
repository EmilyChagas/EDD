#include "noDuplo.h"

typedef struct {
    t_no_duplo * primeiro;
    t_no_duplo * ultimo;
    int n_nois;
}t_lista_dupla;

void inicia_lista(t_lista_dupla *);
int lista_vazia(t_lista_dupla *);

void inserir_inicio(int, t_lista_dupla *);
void inserir_fim(int, t_lista_dupla *);
void exibir_lista(t_lista_dupla *, char *);

int remove_Inicio (t_lista_dupla *);
int remove_Fim(t_lista_dupla *);

