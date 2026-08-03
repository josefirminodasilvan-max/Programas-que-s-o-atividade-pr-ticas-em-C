#include <stdio.h>

int main(){

    char a;
    int i;

    printf("\nDeseja que a semana comece na segunda-feira ao invés do domingo?\n(S) para sim, qualquer outra tecla para não:");
    scanf(" %c", &a); // leading space skips any leftover whitespace/newline

    printf("Informe o número de 1 a 7: ");
    scanf("%i", &i);

    if(a == 'S' || a == 's'){
        i++ ;
    }
    printf("\n");

        switch (i)
        {
        case 1:
        i--;
        printf("O dia selecionado foi %i, sendo Domingo", i);
        break;
        case 2:
         i--;
        printf("O dia selecionado foi %i, sendo Segunda-feira", i);
        break;
        case 3:
         i--;
        printf("O dia selecionado foi %i, sendo Terça-feira", i);
        break;
        case 4:
         i--;
        printf("O dia selecionado foi %i, sendo Quarta-feira", i);
        break;
        case 5:
         i--;
        printf("O dia selecionado foi %i, sendo Quinta-feira", i);
        break;
        case 6:
         i--;
        printf("O dia selecionado foi %i, sendo Sexta-feira", i);
        break;
        case 7:
         i--;
        printf("O dia selecionado foi %i, sendo Sábado", i);
        break;
        case 8:
         i--;
        printf("O dia selecionado foi %i, sendo Domingo", i);
        break;
        default:
            break;

    }
printf("\n\nFIM DO PROGRAMA...");
    return 0;
}