#include <stdio.h>

int main(){

    char    vetor1[6] = "02468", vetor2[6] = "13579", vetor3[11] = "";     
    int     i1 = 0, i2 = 0, i3;

    printf("A sequencia do vetor3 e:\n");
    
    for(i3 = 0; i3 < 10; i3++){
        if(i3%2 == 0){
            vetor3[i3] = vetor1[i1++];
        }else{
            vetor3[i3] = vetor2[i2++];
        }
        printf("%c", vetor3[i3]);
    }
        
    printf("\nFim do programa...");
    return 0;
}