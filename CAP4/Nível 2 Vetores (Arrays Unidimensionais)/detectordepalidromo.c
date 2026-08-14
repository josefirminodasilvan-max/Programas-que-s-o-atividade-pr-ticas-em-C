#include <stdio.h>

int main(){

    int indice1, qtdnumerosiguais = 0, maiorindice = 5, numeros[maiorindice+1]; 

    for (indice1 = 0; indice1 <= maiorindice; indice1++)
    {
        printf("Informe o numero inteiro: ");
        scanf("%i", &numeros[indice1]);
        
    }

    for(indice1 = 0; indice1 < 3; indice1++){
        if(numeros[indice1]==numeros[maiorindice--]){
            qtdnumerosiguais++;
        }
    }
    if(qtdnumerosiguais == 3){
        printf("Os numeros informados formam um palidormo!");
    }
    else{
        printf("Os numero sinformados nao formam um palidromo!");
    }
    
    printf("\nFIM DO PROGRAMA...");
    return 0;
}