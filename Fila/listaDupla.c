#include "listaDupla.h" 

void inicia_lista(t_lista_dupla *l){
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->n_nois = 0;
}

int lista_vazia(t_lista_dupla *l){
    return l-> primeiro == NULL;
}


void enfileira(int i, t_lista_dupla *l){
    t_no_duplo * novo = constroi_no(i);
    if(novo != NULL){
        if(lista_vazia(l)){
            l->primeiro = novo;
        }else {
            novo->anterior = l->ultimo;
            l->ultimo->proximo = novo;
        }
        l->ultimo = novo;
        l->n_nois++;        
    }
}

void exibir_lista(t_lista_dupla *l, char * msg){
    printf ("\n%s\n", msg);
    if (lista_vazia(l)) {
        printf ("lista vazia");
    }
    else {
        t_no_duplo * exibe = l->primeiro;
        while (exibe != NULL){  
            printf ("| %d ", exibe->info);
            exibe = exibe->proximo;
        } 
    }
    printf ("\n");
}

int exibe_primeiro(t_lista_dupla *l){
   if (lista_vazia(l)) {
        printf ("lista vazia");
    }
    else {
        printf ("%d e o primeiro", l->primeiro->info);
    }
    printf ("\n");
}

int exibe_ultimo(t_lista_dupla *l){
    if (!lista_vazia(l) && l->ultimo != l->primeiro) {
        printf ("%d e o ultimo da fila", l->ultimo->info);
    }
    else if(l->ultimo = l->primeiro){
        printf ("%d e o unico elemento da fila", l->ultimo->info);
    }
    printf ("\n");
}

int desenfileira (t_lista_dupla *l){
    int i = l->primeiro->info;
    t_no_duplo * aux = l->primeiro;
    if(l->primeiro == l->ultimo){
        l->primeiro = NULL;
        l->ultimo == NULL;
    } else {
        l->primeiro = l->primeiro->proximo;
        l->primeiro->anterior = NULL;
    }
    l->n_nois++;
    free(aux);
    return i;
}

