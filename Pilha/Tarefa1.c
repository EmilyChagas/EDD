#include <stdio.h>
#include <string.h>

 int main (){
    char palavra[100];
    printf("Digite uma frase: ");
    scanf("%s", palavra);

    for(int i = 0; i<=strlen(palavra)-1; i++){
        if(palavra[i++] == (char)0){
            printf("tem espaço");
        }
    }

    printf("Sua frase sem espaco: %s", palavra);
    
 }