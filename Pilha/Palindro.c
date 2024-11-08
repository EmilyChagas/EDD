#include <stdio.h>
#include <string.h>

int main(){
    char palavra[100], senha[11];
    printf("Digite uma palavra: ");
    scanf("%[^\n]", palavra);
    printf("Voce digitou %s\n", palavra);

    printf("\ndigite uma senha, so digitos (no maximo 10): ");
    //scanf("%s", senha);
    //printf("\nSua senha: %s\n", senha);

    char c = getchar();
    int i=0;

    while(i<10 && ((c=getchar()) != '\n')){
        senha[i++] = c;
    }
    senha[i] ='\0'; //para não aparecer erro
    printf("\nsua senha: %s\n", senha);


    // Verificação de Palindrono
    i = 0;
    int j = strlen(palavra) - 1;
    int e_palindrome = 1;

    while(i <= j && e_palindrome){
        if(palavra[i++] != palavra [j--]){
            e_palindrome = 0;
        }
    }

    if(e_palindrome){
        printf("\n%s e palindrome\n",palavra);
    } else{
        printf("\n%s nao e palindrome\n",palavra);
    }

    return 0;
}