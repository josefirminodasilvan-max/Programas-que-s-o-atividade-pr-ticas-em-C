#include <stdio.h>
#include <string.h>

int main(){

    //definindo char arrays
    char valor1[20], valor2[20], valortemporario[20];

    //Captando valores das variáveis
    printf("\nInfome o primeiro valor: ");
    scanf("%19s", valor1);
    printf("informe o segundo valor: ");
    scanf("%19s", valor2);

    //trocando valores: valor2->valortemporario / valor1->valor2 / valortemporario->valor1
    strcpy(valortemporario, valor2);
    strcpy(valor2, valor1);
    strcpy(valor1, valortemporario);

    //Mostrando valores trocados
    printf("Os valores trocaram!\nPrimeiro valor: %s\nSegundo valor: %s\nFIM DO PROGRAMA...", valor1, valor2);
    return 0;
}