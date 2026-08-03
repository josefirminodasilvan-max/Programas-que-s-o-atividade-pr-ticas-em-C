#include <stdio.h>

int main(){

    
    float nota1, nota2; // Declarando variáveis

    //Captando valores das variáveis
    printf("\nInforme a primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe a segunda nota: ");
    scanf("%f",&nota2);

    if((nota1+nota2)/2 >=7){
        printf("Aprovado!\n");
    }
    else{
        printf("Reprovado!\n");
    }
    printf("\nFIM DO PROGRAMA...");


    return 0;
}