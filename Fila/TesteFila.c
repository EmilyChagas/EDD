#include <time.h>
#include "listaDupla.h"

int main (){
    t_lista_dupla ld;
    inicia_lista(&ld);
    srand(time(0));
    do {
        if(rand() % 2){
            enfileira(rand() % 10, &ld);
            exibir_lista(&ld, "chegou mais um");
            exibe_primeiro(&ld);
        }else{
            if(!lista_vazia(&ld)){
                desenfileira(&ld);
                exibir_lista(&ld, "Primeiro foi atendido");
                exibe_ultimo(&ld);
            } else{
                printf("Nao chegou ninguem\n");
            }
        }
    }while(!lista_vazia(&ld));
    return 0;
}