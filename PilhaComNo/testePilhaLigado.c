#include "lista.h"

int menu (){
    int op;
    printf("\n");
    printf("Escolha uma opcao: \n");
    printf("1. Empilhar\n");
    printf("2. Desempilhar\n");
    printf("3. Mostrar Pilha\n");
    printf("0. Sair\n");
    printf("-> ");
    scanf("%d", &op);
    printf("\n");
    return op;
}

int main () {
    int coca;
    t_lista l;
    inicia_lista(&l);
    do{
        coca = menu();
        switch(coca){
            case 1:
                printf("digite o valor para empilhar: \n");
                int a;
                scanf("%d", &a);
                push(a, &l);
                printf("- Empilhado -\n");
                break;
            case 2:
            if(!lista_vazia(&l)){
                printf("- Desempilhando -\n");      
                printf("%d foi desempilhado\n", pop(&l));
                printf("\n");
            } else{
                printf("Lista Vazia!");
                printf("\n");
            }
                break;
            case 3:
                exibe_lista(&l,"PILHA");
                break;
            case 0:
                printf("Obrigaduu, Volte Sempre!\n");
                break;
            default:
                printf("Errouuu.. Tenta de novo!!!\n");
                break;
        }
    } while (op != 0);
    return 0;
}