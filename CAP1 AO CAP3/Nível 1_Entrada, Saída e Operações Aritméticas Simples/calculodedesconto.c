#include <stdio.h>

int main(){

    float precodoproduto;
    
    printf("\nInforme o preco de um produto: R$");
    scanf("%f", &precodoproduto);
    printf("\nO produto informado tem valor R$%.2f", precodoproduto);

    precodoproduto -= (precodoproduto/10);

    printf("\nO produto informado com desconto de 10%% fica %.2f \n\n", precodoproduto);


    return 0;
}