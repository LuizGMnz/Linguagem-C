#include <stdio.h>

int ack (int m, int n);

int main(void)
{

    int m, n;

    while (1)
    {
        printf("Informe M e N: ");
        scanf("%d%d", &m, &n);

        if ( m == 0 && n == 0)
            break;
            
        ack(m,n);

        if (m >= 0 && m < 4 && n >= 0 && n <= 12){
            printf("\nA funcao de Ackermann de %d e de %d eh %d \n\n",m,n,ack(m,n));

        }else  
            printf("\nValores invalidos para M e N\n\n");

        
    }

    return 0;
}


int ack(int m, int n)
{
    if (m == 0)
        return  n += 1;
    else
        if (n == 0)
            return ack(m-1, 1);
        else
            return ack(m-1, ack(m,n-1));
}