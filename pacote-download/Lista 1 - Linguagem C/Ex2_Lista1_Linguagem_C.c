#include <stdio.h>
#include <math.h>

struct ponto
{
    float x;
    float y;
};

int main()
{
    struct ponto ponto1, ponto2;
    float distancia;

while (1)
{
    printf("Insira as coordenadas dos pontos x1 e y1: \n");
    scanf("%f%f", &ponto1.x, &ponto1.y);
    printf("Insira as coordenadas dos pontos x2 e y2: \n");
    scanf("%f%f", &ponto2.x, &ponto2.y);


    if (ponto1.x == 0 && ponto1.y == 0 && ponto2.x == 0 && ponto2.y == 0)
    {
        printf("Fim do programa. \n");
        break;
    }
    distancia = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
    printf("Distancia entre os pontos: %6f \n\n", distancia);
}
    return 0;

}