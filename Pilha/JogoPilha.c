#include "pilha.h"
#include <time.h>
int main (){
    pilha p;
    iniciaPilha(&p, 5);
    srand(time(0));
    do{
        if(rand() % 2 == 1){
            if(!pilhaCheia(&p)){
                char letra = rand() % 26 + 65;
                push(letra, &p);
            }
        } else{
            if(!pilhaVazia(&p)){
                char letra = pop(&p);
            }
        }
        mostraPilha(&p);
     } while(pilhaVazia(&p));
    return 0;
}