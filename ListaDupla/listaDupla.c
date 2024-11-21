#include "listaDupla.h" 

void inicia_lista(t_lista_dupla *l){
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->n_nois = 0;
}

int lista_vazia(t_lista_dupla *l){
    return l-> primeiro == NULL;
}

void inserir_inicio(int i, t_lista_dupla *l){
    t_no_duplo * novo = constroi_no(i);
    if(novo != NULL){
        if(lista_vazia(l)){
            l->ultimo = novo;
        }else {
            novo->proximo = l->primeiro;
            l->primeiro->anterior = novo;
        }
        l->primeiro = novo;
        l->n_nois++;        
    }
}

void inserir_fim(int i, t_lista_dupla *l){
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

int remove_Inicio (t_lista_dupla *l){
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

int remove_Fim(t_lista_dupla *l){
    int i = l->ultimo->info;
    t_no_duplo * aux = l->ultimo;
    if(l->primeiro == l->ultimo){
        l->primeiro = NULL;
        l->ultimo == NULL;
    } else {
        l->ultimo = l->ultimo->anterior;
        l->ultimo->proximo = NULL;
    }
    l->n_nois++;
    free(aux);
    return i;
}

int pares (t_lista_dupla *l){
    t_no_duplo * aux;
    int par = 0;
    if(!lista_vazia(l)){
        aux = l->primeiro;
        while(aux != NULL){  // Percorre toda a lista
            if(aux->info % 2 == 0){
                par++;
            }
            aux = aux->proximo;
        }
    }
    return par;
}