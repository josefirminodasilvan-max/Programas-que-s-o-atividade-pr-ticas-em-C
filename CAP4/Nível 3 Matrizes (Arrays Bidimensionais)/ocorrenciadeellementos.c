#include <stdio.h>

int main(){

    int valores[16], cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;
    
    for(int i1 = 0; i1 < 15; i1++){
        printf("Escreva valores entre 1 e 5: ");
        scanf("%i", &valores[i1]);
        
        switch (valores[i1])
        {
         case 1:
            cont1++;
            break;
        case 2:
            cont2++;
            break;
        case 3:
            cont3++;
            break;
        case 4:
            cont4++;
            break;
        case 5:
            cont5++;
            break;
        default:
            printf("Erro de execucao, valor inserido incorretamente!!!\n");
            return 1;
            break;
        }
    }
    printf("\nA quantidade ocorrencia de valores foi:\n1: %i\n2: %i\n3: %i\n4: %i\n5: %i",
         cont1, cont2, cont3, cont4, cont5);
    printf("\nFIM DO PROGRAMA...");
    return 0;
}