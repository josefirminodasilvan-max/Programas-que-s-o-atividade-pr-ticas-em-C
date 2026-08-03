#include <stdio.h>



int main (int argc, char *argv[]) {
    #define pi 3.1415L   // sufixo L para long double

    long double raio, perimetro;

    printf("Informe o raio do círculo (em metros): ");
    scanf("%Lf", &raio);  // correto para long double

    perimetro = 2 * pi * raio;

    printf("A Circunferência do Círculo de raio %Lf é %Lf\n", raio, perimetro);
    printf("Valor de pi: %Lf\n", pi);  // usa %Lf para long double
    printf("FIM DO PROGRAMA...\n");

    return 0;
}