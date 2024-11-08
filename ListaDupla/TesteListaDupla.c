#include <time.h>
#include "listaDupla.h"

int main() {
    t_lista_dupla l;
    inicia_lista(&l);
    srand(time(0));
    do{
        if(rand() % 2 == 0){
            if(rand () % 2 == 0){
                inserir_inicio(rand() % 10,&l);
                printf("Insercao de Inicio");
            } else {
                inserir_fim(rand() % 10,&l);
                printf("Insercao de Fim");
            }
        } else{
            if(!lista_vazia(&l)){
                if(rand () % 2 == 0){
                    remove_Inicio(&l);
                    printf("%d saiu do inicio", remove_Inicio(&l));
                } else {
                    remove_Fim(&l);
                    printf("%d saiu do fim", remove_Fim(&l));
                }
            }
        }
        exibir_lista(&l,"");
    } while(!lista_vazia(&l));
}
