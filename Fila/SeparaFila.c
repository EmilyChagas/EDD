#include "listaDupla.h"

void separaFila(t_lista_dupla *l, t_lista_dupla *l_par, t_lista_dupla *l_impar){
    while(!lista_vazia(l)){
        int i = desenfileira(l);
        if(i % 2){
            enfileira(i, l_impar);
        } else{
            enfileira(i, l_par);
        }
    }
}

int main(){
    t_lista_dupla l, l_par, l_impar;
    inicia_lista(&l);
    inicia_lista(&l_par);
    inicia_lista(&l_impar);
    for(int i=1; i<=10;i++){
        enfileira(i,&l);
    }
    separaFila(&l,&l_par,&l_impar);
    exibir_lista(&l,"Fila");
    exibir_lista(&l_par,"Fila de Par");
    exibir_lista(&l_impar,"Fila de Impar");
    return 0;
}