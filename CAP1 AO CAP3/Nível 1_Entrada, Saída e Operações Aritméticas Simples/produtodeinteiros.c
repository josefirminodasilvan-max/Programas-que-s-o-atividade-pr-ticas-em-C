#include <stdio.h>

int main()
{
    //Declarando variáveis que serão usadas
    int inteiro1, inteiro2, produto;

    //Input das informações das variáveis
    printf("Digite o primeiro valor inteiro: ");
    scanf("%i", &inteiro1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%i", &inteiro2);

    //Cálculo do produto e mostrando esse resultado
    produto = inteiro1 * inteiro2;

    printf("\nO valor do produto de %i com %i deu resultado de %i", inteiro1, inteiro2, produto);

    printf("\nFim do programa...");
    return 0;
}