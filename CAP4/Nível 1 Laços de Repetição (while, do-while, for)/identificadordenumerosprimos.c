#include <stdio.h>


int main(){

    int valor_inserido, contador, qtd_de_multiplos = 0;


    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &valor_inserido);

    printf("Os seguintes valores dividem o numero %i:\n\n", valor_inserido);

    for(contador = 1; contador <= valor_inserido; contador++){

        if(valor_inserido % contador == 0){
            qtd_de_multiplos++;
            printf("%i ", contador);

        }
    }
    if(qtd_de_multiplos <= 2){
        printf("\nO numero digitado eh primo!");
    }
    else{
        printf("\nO numero digitado nao eh primo!");
    }

    printf("\n\nEncerrando programa...");
    return 0;
}