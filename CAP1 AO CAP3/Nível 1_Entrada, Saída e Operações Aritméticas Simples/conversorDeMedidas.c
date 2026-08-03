#include <stdio.h>

int main(){
    //Definindo variaveis
    float medida_metros, medida_centimetros;
    
    //Inserindo medidad em metros
    printf("Insira aqui o valor da medida em metros: ");
    scanf("%f", &medida_metros);

    //calculo da medida em centímetros
    medida_centimetros = medida_metros * 100;
    
    //Mostrar medidad em centímetros
    printf("A medida de %.2f metros, corresponde a %.2f centimetros \n", medida_metros, medida_centimetros);
    print("FIM DO PROGRAMA \n ...");

    //Return 0 se não houver erros
    return 0;
}