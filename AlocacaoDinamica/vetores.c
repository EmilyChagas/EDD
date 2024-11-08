#include "vetor.h"

int main(){
    srand(time(0));
    //pedir o tamanho do vetor
    printf("Digite o tamanho do vetor, 0 encerra: ");
    int t;
    scanf("%d", &t);

    while(t > 0) {
    //alocar o vetor dinamicamente
    int * v = (int *) malloc (t * sizeof(int));

    printf("\nEndereço alocado: %p\n", v);

    preenche_vetor(v, t);
    exibe_vetor (v, t);

    printf("\nDigite o novo tamanho, 0 encerra: ");
    scanf("%d ",&t);
    }
    return 0;
}

