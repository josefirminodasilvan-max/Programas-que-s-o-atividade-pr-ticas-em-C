#include <stdio.h>

int main(){

    int altura, base;

    printf("Informe o valor inteiro da base do triangulo retangulo: ");
    scanf("%i", &base);
    printf("Informe o valor inteiro da altura do triangulo retangulo: ");
    scanf("%i", &altura);

    for(int linha = 1 ; linha <= base; linha++){
        for(int qtdasteristicos = 1; qtdasteristicos <= linha; qtdasteristicos++){
            printf("*");
        }
        printf("\n");
    } 

    printf("FIM DO PROGRAMA...");
    return 0;
}