#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef
    struct {
        int topo;
        char *v;
        int capacidade;
    }
pilha;

void iniciaPilha (pilha*, int);
int pilhaCheia(pilha*);
int pilhaVazia(pilha*);
void push (char, pilha*);
char pop (pilha*);
void mostraPilha(pilha *);
