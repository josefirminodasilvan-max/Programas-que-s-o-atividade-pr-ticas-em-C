#include <stdio.h>

int main()
{

    //  Declaração da(s) variável(is)
    int numero_informado, antecessor, sucessor;
    printf("INICIO DO PROGRAMA...\n");
    printf("Informe um numero inteiro: ");
    scanf("%i", &numero_informado);

    //  Fazendo cálculo necessário e mostrando o resultado
    sucessor = numero_informado + 1; 
    antecessor = numero_informado - 1;

    printf("O numero informado foi %i!\nAntecessor: %i\nSucessor: %i", numero_informado, antecessor, sucessor);
    printf("\nFIM DO PROGRAMA...");
    return 0;
}

