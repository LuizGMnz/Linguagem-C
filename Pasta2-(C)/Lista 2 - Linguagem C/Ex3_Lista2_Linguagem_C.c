#include <stdio.h>
#include <math.h>


#define MAX_TAM 15

float Media (int vetor[]);
double Variancia (float media, int vetor[]);
int Moda (int vetor[]);

int main(void)
{
    int vetor[MAX_TAM], moda;
    float media, variancia;

    for (int i = 0; i < MAX_TAM; i++){
        scanf("%d", &vetor[i]);
    }
        media = Media(vetor);

        printf("\nA media aritmetica eh: %.2f\n", media);

        variancia = Variancia(media, vetor);

        printf("A variancia populacional eh: %.2lf\n", variancia);

        printf("O desvio padrao populacional eh: %.2lf\n", pow(variancia, 0.5));

        moda = Moda(vetor);

        printf("A moda de maior valor eh: %d\n\n\n", moda);


    return 0;
}

float Media (int vetor[])
{
    int aux = 0;
    for (int i = 0; i < MAX_TAM; i++)
    {
        aux += vetor[i];
    }

    return (float)aux / MAX_TAM;
}

double Variancia (float media, int vetor[])
{
    double soma = 0;
    for (int i = 0; i < MAX_TAM; i++)
    {
        soma += pow(vetor[i] - media, 2);
    }

    return (double)soma / MAX_TAM;
}

int Moda(int vetor[]) {
    int cont[MAX_TAM];
    int max_frequencia = 0;
    int moda = vetor[0];

    for (int i = 0; i < MAX_TAM; i++) 
    {
        cont[i] = 0;

        for (int j = 0; j < MAX_TAM; j++) 
        {
            if (vetor[i] == vetor[j]) {
                cont[i]++;
            }
        }

        if (cont[i] > max_frequencia) 
        {
            max_frequencia = cont[i];
            moda = vetor[i];
        } 
        else
            if (cont[i] == max_frequencia && vetor[i] > moda) 
            {
                moda = vetor[i];
            }
    }

    return moda;
}