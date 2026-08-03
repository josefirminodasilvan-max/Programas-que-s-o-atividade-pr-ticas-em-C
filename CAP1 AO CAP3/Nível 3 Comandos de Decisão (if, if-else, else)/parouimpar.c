#include <stdio.h>

int main(){

    int numerointeiro;

    printf("Informe o numero inteiro: ");
    scanf("%i",&numerointeiro);

    if(numerointeiro % 2 == 1){
        printf("O numero inteiro informado foi %i sendo um numero impar!", numerointeiro);
    }
    else{
         printf("O numero inteiro informado foi %i sendo um numero par!", numerointeiro);
    }
    printf("\nFIM DO PROGRAMA...");
    return 0;
}
