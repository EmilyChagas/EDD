#include "no.h"

typedef struct lista {
    t_no * primeiro;
} t_lista;

void inicia_lista (t_lista *);
int lista_vazia (t_lista *);
void insere_inicio(int, t_lista *);
void exibe_lista (t_lista *, char *);
void insere_fim(int, t_lista *);
int remove_inicio (t_lista *);
int remove_fim (t_lista *);

int tamanho_lista (t_lista *);
int soma_valores (t_lista *);
int pares (t_lista *);