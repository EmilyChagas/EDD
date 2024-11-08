#include "Pilha.h"

int main(){
    pilha p;
    iniciaPilha(&p, 10);
    for(int i=65;i<75;i++){
        push((char)i, &p);
    }
    
    mostraPilha(&p);
    printf("\n");
    
    while(pilhaVazia(&p) != TRUE){
        printf("%c foi desempilhado\n", pop(&p));
    }

    mostraPilha(&p);
    return 0;
}