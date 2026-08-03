#include <stdio.h>

int main(){
    
    //Declarando variável
    float quilometros, litros, kmporl;

    //Captando valores das variáveis
    printf("\nInforme quantos km foram percorridos: ");
    scanf("%f", &quilometros);
    printf("Informe quantos litros de gasolina foram gastos: ");
    scanf("%f", &litros);
    
    //Calculo km por litro
    kmporl = quilometros/litros;

    //Mostrando resultado final
    printf("Foram percorridos %.2fkm utilizando %.2fl de gasolina gerando assim %.2fkm/l", 
        quilometros, 
        litros, 
        kmporl);

    return 0;
}