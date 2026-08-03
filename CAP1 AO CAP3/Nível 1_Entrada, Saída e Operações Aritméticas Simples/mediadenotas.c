#include <stdio.h>

int main()
    {
        float nota1, nota2, media;

        //Primeiramente vamos capturar as informações necessárias
        printf("Digite aqui a primeira nota: "); scanf("%f", &nota1);
        printf("Digite aqui a segunda nota: "); scanf("%f", &nota2);

        //Faço o calculo e mostro o resultado da média
        media = (nota1 + nota2)/2;

        printf("\nA media ficou como %.2f", media);
        
        //Final do programa
        printf("\nFim do programa...");
        return 0;
    }
