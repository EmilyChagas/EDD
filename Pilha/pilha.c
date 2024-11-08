#include "Pilha.h"
void iniciaPilha (pilha *p, int capacidade){
    p->topo = 0;
    p->v = (char *) malloc (capacidade * sizeof(char));
    p->capacidade = capacidade;
}

int pilhaCheia(pilha *p){
    if(p->topo == p->capacidade){
        return TRUE;
    } else {
        return FALSE;
    }
}

int pilhaVazia(pilha *p){
    if(p->topo == 0){
        return TRUE;
    } else {
        return FALSE;
    }

}

void push (char c, pilha *p){
    p->v[p->topo++] = c; // pós incremento
}

char pop (pilha *p){
    return p->v[--p->topo]; // pré incremento
}

void mostraPilha(pilha *p){
    if(pilhaVazia(p)==TRUE){
        printf("Pilha Vazia!\n");
    }
    else {
        for(int i=p->topo-1;i>=0;i--){
            printf("%c\n", p->v[i]);
            printf("--------\n");
        }
    }
}