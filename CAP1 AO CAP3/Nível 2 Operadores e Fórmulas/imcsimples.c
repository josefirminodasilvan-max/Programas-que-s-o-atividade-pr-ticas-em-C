#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    //declarando variáveis
    float peso, altura, imc;

    //captando valores das variáveis
    printf("\nInforme o peso (kg): ");
    scanf("%f", &peso);
    printf("Informe a altura (m): ");
    scanf("%f", &altura);

    //calculando imc
    imc = peso / (altura*altura);

    //mostrando resultados
    printf("Uma pessoa com peso de %.2fkg e uma altura de %.2fm tem um IMC de %.2f\nFIM DO PROGRAMA...", peso, altura, imc);
    
    return 0;
}