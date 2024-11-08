#include <stdio.h>
void f1(int a){
    printf("entrei na f1: %d\n", a);
    a++; //não altera em outros locais que não seja a função que está
}

void f2(int a){
    printf("entrei na f2: %d\n", a);
    a++;
    f1 (a);
}

void f3(int *a){
    printf("valor de a na chegada a f3:%d\n", *a);
    *a = *a + 1; // soma mais 1 no conteudo que o ponteiro esta referenciando
}

int main(){
    int a = 10;
    f1(a);
    f2(a);
    f3(&a);

    printf("terminei tudo! a = %d\n", a);
    return 0;
}
