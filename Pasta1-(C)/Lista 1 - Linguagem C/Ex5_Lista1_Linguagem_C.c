#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor[10];
    int posicao = 0;
    int trocas = 0;
    int cont, sub;
    bool ordenado = true;

    while (posicao < 10)
    {
    printf("Informe um valor: \n");
    scanf("%d", &vetor[posicao]);
    posicao = posicao + 1;
    }

    for (posicao = 0; posicao < 9; posicao++)
    {
        if (vetor[posicao] > vetor[posicao + 1])
        {
            ordenado = false;
            break;
        }
    }
    if (ordenado)
    {
        printf("Vetor ordenado. \n");
    }
    else
    {
        for (posicao = 0; posicao < 9; posicao++) {
            for (cont = 0; cont < 9 - posicao; cont++) {
                if (vetor[cont] > vetor[cont + 1]) {
                    
                    sub = vetor[cont];
                    vetor[cont] = vetor[cont + 1];
                    vetor[cont + 1] = sub;
                    trocas++;
                }
            }
        }
        for (posicao = 0; posicao < 10; posicao++) {
            printf("%d ", vetor[posicao]);
        }
        printf("\n");

        printf("%d trocas foram necessarias\n", trocas);
    }
    return 0;
}