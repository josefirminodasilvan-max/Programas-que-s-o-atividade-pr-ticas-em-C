#include <stdio.h>

int main(){
    //Declarando a variável idade
    int idade;

    //Capturando o dado da variável
    printf("\nInforme a sua idade: ");
    scanf("%i", &idade);
    
    //cansei de colocar explicação kkkkkkkkk
    if(idade >= 18){
        printf("A sua idade inserida foi %i, assim, sendo maior de idade!", idade);
    }
    else{
        printf("A sua idade inserida foi %i, assim, não sendo maior de idade!", idade);
        
    }
    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}