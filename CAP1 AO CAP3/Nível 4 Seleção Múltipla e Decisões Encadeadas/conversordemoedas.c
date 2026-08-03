#include <stdio.h>


int main(){

    float real, dolar, cotacao, resultado;
    int i;

    printf("\nInforme o tipo de conversão:\n(1).Real para Dólar\n(2)Dólar para Real\n");
    scanf("%i", &i);
    printf("Informe quanto vale 1 Dólar em reais: R$ ");
    scanf("%f", &cotacao);

    switch(i){
        case 1:
            printf("Informe a quantidade de reais: R$");
            scanf("%f", &real);
            resultado = real/cotacao;
            printf("\nR$%.2f valem $%.2f !", real, resultado);
            break;
        case 2:
            printf("Informe a quantidade de dólares: $");
            scanf("%f", &dolar);
            resultado = dolar*cotacao;
            printf("\n$%.2f valem R$%.2f !", dolar, resultado);
            break;
        default:

            break;
    }
    printf("\n\nFIM DO PROGRAMA");
    return 0;
}