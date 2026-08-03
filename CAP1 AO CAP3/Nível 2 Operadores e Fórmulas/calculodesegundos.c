#include <stdio.h>

int main(){

    //declaração de variáveis
    double quantidadedehoras, quantidadedesegundos;

    //captando valores para as variáveis
    printf("\nInforme um valor em horas: ");
    scanf("%lf", &quantidadedehoras);

    //conversão de horas para segundos
    quantidadedesegundos = quantidadedehoras*60*60;

    //mostrando resultado
    printf("Esse valor %.3lfh corresponde a %.3lfs\nFIM DO PROGRAMA...", quantidadedehoras, quantidadedesegundos);

    return 0;
}