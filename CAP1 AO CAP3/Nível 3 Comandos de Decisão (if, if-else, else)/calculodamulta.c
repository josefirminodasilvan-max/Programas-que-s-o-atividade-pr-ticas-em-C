#include <stdio.h>

int main(){

    float velocidade;

    printf("\nInforme a velocidade do veículo em km/h: ");
    scanf("%f", &velocidade);

    if(velocidade > 80){
        printf("A velocidade registrada foi de %.2f, portanto, o usuário foi multado!", velocidade);
    }
    else{
        printf("A velocidade registrada foi de %.2f, portanto, o usuário não foi multado!", velocidade);
    }
    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}