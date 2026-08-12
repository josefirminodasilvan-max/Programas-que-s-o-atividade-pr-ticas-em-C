#include <stdio.h>

int main()
{
    int vetor[100], n, i, j, posicao, troca;

    printf("Entre com o numero de itens de voce deseja adicionar: \n");
    scanf("%d", &n);

    printf("Entre com o valor dos %d itens que seram adicionados em sequencia (digite enter apos informar cada valor): \n", n);

    //o laço for possui uma instrução para adicionar cada item em sua posição.
    //o laço irá percorer o vetor inicializando ele ate a quantidade de itens solicitado.
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    //apos a inicialização do vetor chegou a hora de realizar a ordenação
    for(i = 0; i < n - 1; i++)
    {
        posicao=i;

        //o codigo irá checar se o item possui um velor menor do que os
        //itens que vem depois dele no vetor e caso essa condição seja falsa
        //o item trocara de lugar com o item de menor valor que ele encontrar no vetor.
        for(j = i + 1; j < n; j++)
        {
            if(vetor[posicao] > vetor[j])
            posicao=j;
        }

        if(posicao != i)
        {
            troca=vetor[i];
            vetor[i]=vetor[posicao];
            vetor[posicao]=troca;
        }
    }

    printf("O vetor foi ordenado\n");

    //imprime o vetor ordenado
    for(i = 0; i < n; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}