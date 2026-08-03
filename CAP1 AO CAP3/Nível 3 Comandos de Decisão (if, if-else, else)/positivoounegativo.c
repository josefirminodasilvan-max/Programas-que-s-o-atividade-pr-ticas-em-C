#include <stdio.h>

int main(){

    float numero; // declarando variável

    printf("\nInforme um número: "); 
    scanf("%f", &numero); //Captando valor da variável

    //Se o valor for diferente de zero então ou é negativo ou positivo!
    if(numero!=0){

        if(numero>0){

            printf("O número informado é %.2f, sendo positivo!", numero);

        }
        if(numero<0){

            printf("O número informado é %.2f, sendo negativo!", numero);
        }
    }
    else{
        
        printf("O numero informado é zero!");
    }

    printf("\n\nFIM DO PROGRAMA ...");
    return 0;
}