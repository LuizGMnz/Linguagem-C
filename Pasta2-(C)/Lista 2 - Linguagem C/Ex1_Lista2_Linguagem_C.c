#include <stdio.h>
#include <math.h>

float IAC ( int circu, float altura);
void IAC_M (float class);
void IAC_F (float class);

int main (void)
{
    float altura, class;
    int circu;
    char sexo;


    while (1)
    {
        scanf(" %c", &sexo);

        if (sexo == 'X' || sexo == 'x')
            break;
            
        scanf("%d%f", &circu,&altura);

        
        
        class = IAC( circu, altura);

        if (sexo == 'M' || sexo == 'm')
            IAC_M(class);
        if (sexo == 'F' || sexo == 'f')
            IAC_F(class);
    }
    

    return 0;

}

float IAC ( int circu, float altura)
{
    return((circu / pow(altura, 1.5)) - 18);
}

void IAC_M ( float class)
{
    if (class > 25)
        printf("Excesso de gordura\n");
    if (class >= 19 && class <= 25)
        printf("Moderada\n");
    if (class >= 15  && class < 19)
        printf("Ideal\n");
    if (class >= 11 && class < 15)
        printf("Baixa\n");
    if (class >= 6 && class < 11)
        printf("Excepcionalmente baixa\n");
}

void IAC_F(float class)
{
if (class > 30)
        printf("Excesso de gordura\n");
    if (class >= 26 && class <= 30)
        printf("Moderada\n");
    if (class >= 20 && class < 26)
        printf("Ideal\n");
    if (class >= 16 && class < 20)
        printf("Baixa\n");
    if (class >= 10 && class < 16)
        printf("Excepcionalmente baixa\n");
}
