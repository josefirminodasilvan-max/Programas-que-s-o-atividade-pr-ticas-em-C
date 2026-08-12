#include <stdio.h>

int main(){

   char numeros[6] = "43521";
   printf("A sequencia usada eh %s sendo ordenada, fica:\n", numeros);
   for(int indice_principal = 0; indice_principal < 5; indice_principal++){
    for(int indicesecundario = indice_principal + 1; indicesecundario <= 4 ; indicesecundario++ ){
            if(numeros[indice_principal] > numeros[indicesecundario]){
                char temporario = numeros[indice_principal];
                numeros[indice_principal] = numeros[indicesecundario];
                numeros[indicesecundario] = temporario;
            }
    }
   }
   for(int item = 0; item <5; item++){
   printf("%c", numeros[item]);
   }

   printf("\n");
   return 0;
}
