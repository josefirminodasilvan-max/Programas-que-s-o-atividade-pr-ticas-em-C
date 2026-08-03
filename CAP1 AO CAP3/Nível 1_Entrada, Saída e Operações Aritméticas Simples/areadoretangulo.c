#include <stdio.h>

int main(){

    //Definindo as variáveis altura e base
    float base , altura , area ;

    //Input dessas variáveis
    printf("\nPor favor informe o valor da base do retangulo: ");       scanf("%f", &base );
    printf("Por favor informe o valor da altura do retangulo: ");     scanf("%f", &altura);
    
    area = base * altura ;

    printf("\nO retangulo de base %.2f m e altura %.2fm tem a area de %.2fm^2", base, altura, area);
    printf("\nFIM DO PROGRAMA\n...");

    return 0;
}