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

int partition(int *a, int p, int r){
    int j;
    int x = a[r];
    int i = p-1;
    for(j = p; j < r; j++){
        if(a[j] <= x){
            i++;
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }
    }
    i++;
    int aux = a[j];
    a[j] = a[i];
    a[i] = aux;
    return i;
}
void QuickSort(int *a, int p, int r){
    if(p < r){
        int q = partition(a, p, r);
        QuickSort(a, p, q-1);
        QuickSort(a, q+1, r);

    }
}