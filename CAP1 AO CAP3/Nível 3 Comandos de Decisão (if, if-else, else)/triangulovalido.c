#include <stdio.h>

int main(){

    double l1, l2, l3;
    
    printf("\nInforme o valor do lado 1 do triângulo: ");
    scanf("%lf", &l1);
    printf("Informe o valor do lado 2 do triângulo: ");
    scanf("%lf", &l2);
    printf("Informe o valor do lado 3 do triângulo: ");
    scanf("%lf", &l3);

    if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
        printf("\nO triãngulo com lados %.4f, %.4f e %.4f, é possível! ", l1, l2, l3);
    }
    else{
        printf("\nO triãngulo com lados %.4f, %.4f e %.4f, não é possível! ", l1, l2, l3);
    }


    printf("\n\nFIM DO PROGRAMA...");
    return 0;
}