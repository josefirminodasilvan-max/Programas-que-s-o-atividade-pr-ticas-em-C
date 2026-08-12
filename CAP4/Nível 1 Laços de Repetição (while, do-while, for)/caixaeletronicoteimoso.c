#include <stdio.h>

int main(){

    float saque;

    printf("\nInforme o valor do saque, sendo múltiplo de 10: ");
    scanf("%f", &saque);

    if((int)saque % 10 != 0 ){

        do {
            printf("\nError!\nPor Favor informe um valor múltiplo de 10: ");
            scanf("%f", &saque);

        }
        while((int)saque % 10 != 0);
    }

    printf("\nO saque solicitado no valor de %.2f foi realizado! Volte sempre!", saque);
    printf("\nFIM DO PROGRAMA...");
    
    return 0;
}