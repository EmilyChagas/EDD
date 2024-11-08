#include "lista.h"

void inicia_lista (t_lista *l) {
    l->primeiro = NULL;
}
int lista_vazia (t_lista *l) {
    return (l->primeiro == NULL);
}
void insere_inicio (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (novo != NULL) {
        if (!lista_vazia (l)) {
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
    }
}
void exibe_lista (t_lista *l, char * msg) {
    t_no * aux;
    printf ("\n%s\n", msg);
    if (lista_vazia(l)) {
        printf ("lista vazia");
    }
    else {
        aux = l->primeiro;
        while (aux != NULL) {  //vai até o fim
            printf ("| %d |->", aux->info);
            aux = aux->proximo;
        }
        printf ("\\\\");
    }
    printf ("\n");
}
void insere_fim (int i, t_lista *l) {
    t_no * novo = constroi_no(i);
    if (lista_vazia(l)) {
        l->primeiro = novo;
    }
    else {
        t_no * aux = l->primeiro;
        while (aux->proximo != NULL) {  //vai até o último
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}
int remove_inicio (t_lista *l) {
    int i = l->primeiro->info; //i recebe uma cópia da informação armazenada no primeiro nó
    t_no * aux = l->primeiro; //aux recebe uma cópia do endereço do primeiro nó
    l->primeiro = l->primeiro->proximo;
    free(aux);
    return i;
}

int remove_fim (t_lista *l) {
    int i;
    if (l->primeiro->proximo == NULL) { //tem um elemento só
        i = l->primeiro->info;
        free (l->primeiro);
        l->primeiro = NULL;
    }
    else {
        t_no * aux = l->primeiro;
        while (aux->proximo->proximo != NULL) { //vai até o penúltimo
            aux = aux->proximo;
        }
        i = aux->proximo->info;
        free (aux->proximo);
        aux->proximo = NULL;
    }
    return i;
}
int tamanho_lista (t_lista *l) {
    int cont=0;
    if (!lista_vazia (l)) {
        t_no * aux = l->primeiro;
        while (aux != NULL) {
            cont++;
            aux = aux->proximo;
        }
    } 
    return cont;
}
int soma_valores(t_lista * l) {
    t_no *aux;
    int soma = 0;
    if (!lista_vazia(l)) {
        aux = l->primeiro;
        while (aux != NULL) {
            soma += aux->info;
            aux = aux->proximo;
        }
    }
    return soma;
}