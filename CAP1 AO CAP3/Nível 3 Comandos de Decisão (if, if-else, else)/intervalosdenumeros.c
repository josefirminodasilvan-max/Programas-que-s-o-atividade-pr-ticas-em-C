#include <stdio.h>

int main(){

    float numero;

    printf("Informe o valor: ");
    scanf("%f", &numero);
    
    if(10 <= numero && numero <= 50){

        printf("O número informado está dentro do intervalo [10, 50] !");
    }
    else{
        printf("O número informado não está dentro do intervalo [10, 50] !");
    }
    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}