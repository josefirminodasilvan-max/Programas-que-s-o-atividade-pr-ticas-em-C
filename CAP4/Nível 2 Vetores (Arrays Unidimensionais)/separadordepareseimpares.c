#include <stdio.h>

int main(){

    int contPares = 0, contImpares = 0,
        indicePar = 0, indiceImpar = 0, 
        numeros[11], pares[10], impares[10];

    for(int indice1 = 0; indice1 < 10; indice1++){

        printf("Informe o numero inteiro: ");
        scanf("%i", &numeros[indice1]);

        if(numeros[indice1] % 2 == 0){
            contPares++;
        }else{
            contImpares++;
        }
    }
    for(int indice2 = 0; indice2 < 10; indice2++){

        if(numeros[indice2]%2 == 0){
            pares[indicePar++] = numeros[indice2];
        }
        else{
            impares[indiceImpar++] = numeros[indice2];
        }
    }
    printf("\nDesses valores os numeros pares sao ");
    for(int indice3 = 0; indice3<contPares; indice3++){
        printf("%i ", pares[indice3]);
    }
    printf("\nDesses valores os numeros impares sao ");
    for(int indice4 = 0; indice4<contImpares; indice4++){
        printf("%i ", impares[indice4]);
    }



    printf("\nFIM DO PROGRAMA...  ");
    return 0;
}