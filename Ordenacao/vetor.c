#include "vetor.h"

void preenche_vetor(int *v, int t){
    for(int i=0;i<t;i++){
        v[i] = rand() % (t*10);
    }
}
void exibe_vetor(int *v,int t, char *msg){
    printf("\n%s\n", msg);
    for(int i=0;i<t;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
void soma_vetores (int *v1, int *v2, int *vs, int t){
    for(int i=0; i<t; i++){
        vs[i] = v1[i] + v2[i];
    }
}
void BubbleSort (int *v, int n){
    for(int i = 1; i < n; i++){
        for (int j = 0; j < n-i;j++){
            if(v[j] > v[j+1]){
            int aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
            }
        }
    }
}
void InsertionSort (int *v, int n){
    int i, j;
    for( i = 1; i < n; i++){
         int x = v[i];
        for( j = i-1; j>=0 && v[j]>x;j--){
            v[j+1] = v[j];
        }
        v[j+1] = x;
    }
}