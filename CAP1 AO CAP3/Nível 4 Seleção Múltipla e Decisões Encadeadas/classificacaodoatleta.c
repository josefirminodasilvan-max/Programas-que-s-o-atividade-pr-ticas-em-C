#include <stdio.h>

int main(){

    int idade, i = 0;

    printf("\nInforme a idade do atleta: ");
    scanf("%i", &idade);

    printf("De acordo com a idade informada, o atleta está na ", idade);

    if((idade >= 5) && (idade <= 7)){
        i=1;
    } 
    else if((idade >= 8) && (idade <= 10)){
        i=2;
    }
    else if((idade >= 11) && (idade <= 17)){
        i=3;
    }
    else if(18 <= idade){
        i=4;
    }
    switch(i){
    case 1:
        printf("categoria: Infantil A");
        break;

    case 2:
        printf("categoria: Infantil B");
        break;
    case 3:
        printf("categoria: Juvenil A");
        break;
    case 4:
        printf("categoria: Juvenil B");
        break;
    default:
        break;
    }

    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}