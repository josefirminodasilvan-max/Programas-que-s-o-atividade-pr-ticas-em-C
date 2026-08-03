#include <stdio.h>

int main(){

    float valor1, valor2;

    printf("\nInforme o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);


    if(valor1 != valor2){

        if(valor1>valor2){
            printf("O primeiro valor é maior que o segundo, pois %.2f > %.2f", valor1, valor2);
        }
        if(valor2>valor1){
            printf("O segundo valor é maior que o primeiro, pois %.2f > %.2f", valor2, valor1);
        }
    }
    else{
        printf("Os valores inseridos são iguais");
    }

    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}