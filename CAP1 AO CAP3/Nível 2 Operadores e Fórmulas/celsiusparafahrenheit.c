#include <stdio.h>


int main(){
    
    //Declarando as variáveis
    float celsius, fahrenheit;

    //Captando os valor da variável Celsius
    printf("Informe o valor da temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    
    //Calculando o valor em Fahrenheit
    fahrenheit = celsius*9/5 + 32;

    //Mostrando o resultado final
    printf("A temperatura de %.2f em Celsius é %.2f em Fahrenheit!\nFIM DO PROGRAMA...", celsius, fahrenheit);

    return 0;
}