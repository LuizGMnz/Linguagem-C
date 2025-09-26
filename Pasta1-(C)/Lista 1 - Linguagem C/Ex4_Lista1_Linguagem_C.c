#include <stdio.h>

int main()
{
    int Peca_Mes [3] [3];
    int Grana_Peca [3] [2];
    int Grana_Mes [3] [2] = {0};

    printf("Digite a quantidade de pecas P1, P2 e P3 nos meses de Janeiro, Fevereiro e Marco:\n");
    int mes = 0;
    int peca = 0;
    while (peca < 3)
    {
        scanf("%d", &Peca_Mes[mes][peca]);
        peca++;
    }
    mes++;
    }
    printf("\nDigite o custo e o lucro de P1, P2 e P3:\n");
    int tipoPeca = 0;
    while (tipoPeca < 3) 
    {
        printf("Peca P%d (CUSTO e LUCRO): ", tipoPeca + 1);
        int tipoValor = 0;
        while (tipoValor < 2) 
        {
            scanf("%d", &Grana_Peca[tipoPeca][tipoValor]);
            tipoValor++;
        }
        tipoPeca++;
    }
    mes = 0;
    while (mes < 3) 
    {
        tipoPeca = 0;
        while (tipoPeca < 3) 
        {
            Grana_Mes[mes][0] += Peca_Mes[mes][tipoPeca] * Grana_Peca[tipoPeca][0];
            Grana_Mes[mes][1] += Peca_Mes[mes][tipoPeca] * Grana_Peca[tipoPeca][1];
            tipoPeca++;
        }
        mes++;
    }
    printf("\nGranaMes (CUSTO e LUCRO por mes):\n");
    char *nomesMeses[3] = {"JAN", "FEV", "MAR"};
    mes = 0;
    while (mes < 3) 
    {
        printf("%s -> CUSTO: %d, LUCRO: %d\n", nomesMeses[mes], Grana_Mes[mes][0], Grana_Mes[mes][1]);
        mes++;
    }

    return 0;
}