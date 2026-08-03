#include <stdio.h>
int main(){
    //Declarando variáveis
    float valor1, valor2, maiorvalor;

    //Inserindo valores das variáveis
    printf("\nInforme o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);

    //Comparando os valores e armazenando o maior valor em maiorvalor
    maiorvalor = (valor1 >= valor2) ? valor1:valor2; 
    //Mostrando maior valor
    printf("O maior valor dos dois inseridos: %.2f\nFIM DO PROGRAMA...", maiorvalor);
    return 0;
}



