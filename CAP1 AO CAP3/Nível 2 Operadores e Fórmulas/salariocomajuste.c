#include <stdio.h>

int main(){
    //Delcarando variáveis
    float salariobase, salarionovo, aumento;

    //Captando valores das variáveis
    printf("Informe o salário base: R$");
    scanf("%f", &salariobase);
    printf("Informe o aumento em %%: ");
    scanf("%f", &aumento);

    //Calculando incremento
    salarionovo = 2*salariobase*aumento/100 + salariobase;

    //Mostrando o valor novo
    printf("\nSalário informado de R$%.2f com um aumento de %.2f%% é R$ %.2f \nFIM DO PROGRAMA...", salariobase, aumento, salarionovo);
    

    return 0;
}



