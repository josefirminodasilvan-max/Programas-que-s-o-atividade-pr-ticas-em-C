#include <stdio.h>

int main(){

    float notas[11], soma = 0, media_geral;
    int indice1, indice2;

    for(indice1= 0; indice1<10; indice1++){
        printf("Informe a nota do aluno: ");
        scanf("%f", &notas[indice1]);
        soma += notas[indice1];
    }
    media_geral = soma / indice1;
    printf("As notas acima da media geral, sendo ela %.2f sao:\n", media_geral);
    for(indice2 = 0; indice2 < 10; indice2++){
        if(notas[indice2] >= media_geral){
            printf("%.2f ", notas[indice2]);
        }
    }
    printf("\nFIM DO PROGRAMA...");
    return 0;
}