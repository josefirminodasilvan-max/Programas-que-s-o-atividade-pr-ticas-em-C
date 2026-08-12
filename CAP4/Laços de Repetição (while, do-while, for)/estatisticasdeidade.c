#include <stdio.h>

int main(){
    
    float montante = 0, contador = 0, idade, media_de_idade = 0, maior_idade = 0;


    while(contador == 0 || idade != 0){

        printf("Informe a idade dessa pessoa: ");
        scanf("%f", &idade);

        if(idade == 0){
            montante += idade;
            printf("Idade 0 informada!\n");
        }
        else{
            montante += idade;
            maior_idade = (idade >= maior_idade) ? idade: maior_idade;
            contador++;
        }
    }

    media_de_idade = (montante / contador);
    printf("\nA quantidade de idades inseridas foi de %.0f e a media de %.2f sendo a maior delas %.0f", contador, media_de_idade, maior_idade);

    printf("\n\nEncerrando o programa...");
    return 0; 
}