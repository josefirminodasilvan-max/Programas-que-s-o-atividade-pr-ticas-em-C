#include <stdio.h>

int main(){

    //Declarando variáveis
    int anos, dias;

    //capturando valor das variáveis
    printf("Informe a sua idade: ");
    scanf("%i", &anos);

    //Calculando quantidade de dias e informando logo em seguida
    dias = anos*365;
    printf("Considerando que um anos corresponde a 365 dias, então %i anos sao %i dias\nFIM DO PROGRAMA...", anos, dias);

    //retorno de erros ou não
    return 0;
}