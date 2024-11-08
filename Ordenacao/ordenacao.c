#include "vetor.h"
int main(){
    int n, *v;
    srand(time(0));
    printf("Digite o tamanho do vetor (0 encerra): ");
    scanf("%d",&n);
    while (n>0){
        v = (int *) malloc(n * sizeof(int));
        preenche_vetor(v, n);
        //exibe_vetor(v, n, "1 Vetor gerado: ");
        long inicio = time(0);
        BubbleSort(v, n);
        long fim = time(0);
        printf("\nn = %d, tempo bubble = %d", n, fim - inicio);
        //exibe_vetor(v, n, "Vetor ordenado bubble: ");
        
        preenche_vetor(v,n);
        //exibe_vetor(v, n, "2 Vetor gerado: ");
        inicio = time(0);
        InsertionSort(v, n);
        fim = time(0);
        printf("\nn = %d, tempo insertion = %d", n, fim - inicio);
        //exibe_vetor(v, n, "vetor ordenado insertion: ");
        
        free(v);
        
        printf("\nDigite o tamanho para novo teste (0 encerra): ");
        scanf("%d",&n);
    }
    return 0;
}