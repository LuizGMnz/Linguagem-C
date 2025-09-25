# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()

{
    char palavra1 [13];
    char palavra2 [13];

    printf("Digite uma senha de ate 12 caracteres:\n");
    scanf("%12s", palavra1);

    if (strlen (palavra1) > 6)
    {
        printf("Confirme a senha: ");
        scanf("%12s", palavra2);

        if (strcmp(palavra1, palavra2) != 0)
        { 
            printf("Senha invalida, tente novamente.\n");
            return 0;
        }
    }    
    else
    {
        printf("Senha invalida, tente novamente.\n");
        return 0;
    }
    int maiuscula = 0, minuscula = 0, digito = 0;

    for (int i = 0; palavra1[i] != '\0'; i++)

    {
        if (isupper(palavra1[i])) maiuscula = 1;
        if (islower(palavra1[i])) minuscula = 1;
        if (isdigit(palavra1[i])) digito = 1;
    }

    if (maiuscula && minuscula && digito)
    {
        printf("Nova senha ok\n");
    }
    else
    printf("Nova senha invalida\n");

    return 0;
}