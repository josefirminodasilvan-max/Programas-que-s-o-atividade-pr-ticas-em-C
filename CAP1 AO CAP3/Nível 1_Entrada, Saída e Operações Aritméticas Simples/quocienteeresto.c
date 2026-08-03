#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {

    //Declarando variáveis
    int     numerador, denominador, resto;
    double  resultado_da_divisao;

    //Capturando dados 
    printf("\nInsira o valor inteiro do numerador da divisão: ");           
    scanf("%i", &numerador);
    printf("Agora insira o valor inteiro do denominador da divisão: ");     
    scanf("%i", &denominador);

    //Cálculo das operações necessárias
    resultado_da_divisao =  numerador/denominador; 
    resto = numerador % denominador;

    //Resultado final
    printf("\nO resultado da divisão  %i/%i é %.2f com resto %i. \nFIM DO PROGRAMA...", numerador, denominador, resultado_da_divisao, resto);

    return 0;
}