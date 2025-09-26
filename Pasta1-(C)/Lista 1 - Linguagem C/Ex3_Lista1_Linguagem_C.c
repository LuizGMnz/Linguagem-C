#include <stdio.h>

struct valores 
{
    float x;
    float y;
};

int main()
{
    struct valores valor1, valor2, valor3;
    int N;

printf("Informe quantos testes deseja realizar: \n");
scanf("%i", &N);

for (int i = 0; i < N; i++)
{
    printf("Informe os valores do vertice inferior esquerdo: \n");
    scanf("%f%f", &valor1.x, &valor1.y);
    printf("Informe os valores do vertice superior direito: \n");
    scanf("%f%f", &valor2.x, &valor2.y);
    printf("Informe os valores para verificar se estao contidos: \n");
    scanf("%f%f", &valor3.x, &valor3.y);

    if (valor3.x > valor1.x && valor3.y > valor1.y && valor3.x < valor2.x && valor3.y < valor2.y)
        printf("Contido \n");
    else
        printf("Nao-contido \n");
}
    return 0;
}