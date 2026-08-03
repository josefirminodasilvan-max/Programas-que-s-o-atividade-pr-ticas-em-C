#include <stdio.h>

int main(){

    double valor1, valor2, resultado;
    int i;

    printf("\n=======================SEJA MUITO BEM VINDO A CALCULADORA BÁSICA=========================\n");
    printf("Informe o primeiro valor: ");
    scanf("%lf", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%lf", &valor2);

    printf("\nAgora escolha a operação desejada:\n\n1.(+)\n2.(-)\n3.(*)\n4.(/)\n\nOpção escolhida: ");

    scanf("%i", &i);
    switch (i)
    {
    case 1:
        resultado = valor1 + valor2;
        printf("%.4f + %.4f = %.4f", valor1, valor2, resultado);
        break;
    
    case 2:
        resultado = valor1 - valor2;
        printf("%.4f - %.4f = %.4f", valor1, valor2, resultado);
        break;
    case 3:
        resultado = valor1 * valor2;
        printf("%.4f * %.4f = %.4f", valor1, valor2, resultado);
        break;
    case 4:
        if(valor2 != 0){
        resultado = valor1 / valor2;
        printf("%.4f / %.4f = %.4f", valor1, valor2, resultado);
        break;
        }
        else{
            printf("ERROR!!! Denominador não pode ser 0 em uma divisão!");
            break;
        }
    
    default:
        break;
    }

    printf("\n\nFIM DO PROGRAMA...");

    return 0;
}