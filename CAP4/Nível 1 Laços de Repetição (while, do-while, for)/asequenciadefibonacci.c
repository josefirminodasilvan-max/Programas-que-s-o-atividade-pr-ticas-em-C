#include <stdio.h>

int main(){

    int quantidadedetermos, valoranterior1 = 0, valoranterior2 = 1, valoratual;
    printf("Informe a quantidade de termos que você deseja para a sequência de Fibonacci: ");
    scanf("%i", &quantidadedetermos);
    printf("A sequência de Fibonacci com %i termos ficou como: \n\n ", quantidadedetermos);
    
    for(int contador = 0;contador <= quantidadedetermos; contador++ ){
        if(contador <= 1){
            valoratual = contador;
        }else{
            valoratual = valoranterior1 + valoranterior2;
            valoranterior1 = valoranterior2;
            valoranterior2 = valoratual;  
        }
        printf("%i ", valoratual);
    }
    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}