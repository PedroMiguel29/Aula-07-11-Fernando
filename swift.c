#include <stdio.h>
#include <locale.h>

int main(void)
{
    int ope;
    float nu1, nu2, soma, div, mult, sub;
    setlocale(LC_ALL,"Portuguese");
    printf("Escolha uma opera��o:\n1 para SOMA\n2 para SUBTRA��O\n3 para MULTIPLICA��O\n4 para DIVIS�O\n");
    scanf("%d", &ope);

    switch (ope)
        {
            case 1:
                printf("Digite o primeiro n�mero da soma: ");
                scanf("%f", &nu1);
                printf("Digite o segundo n�mero: ");
                scanf("%f", &nu2);
                soma= nu1 + nu2;
                printf(" %.2f + %.2f = %.2f", nu1, nu2, soma);
                break;

            case 2:
                printf("Digite o primeiro n�mero da subtra��o: ");
                scanf("%f", &nu1);
                printf("Digite o segundo n�mero da subtra��o: ");
                scanf("%f", &nu2);
                sub = nu1 - nu2;
                printf(" %.2f - %.2f = %.2f", nu1, nu2, sub);
                break;

            case 3:
                printf("Digite o primeiro n�mero da multiplica��o: ");
                scanf("%f", &nu1);
                printf("Digite o segundo n�mero da multiplica��o: ");
                scanf("%f", &nu2);
                mult= nu1 * nu2;
                printf(" %.2f * %.2f = %.2f", nu1, nu2, mult);
                break;

            case 4:
                printf("Digite o primeiro n�mero da divis�o: ");
                scanf("%f", &nu1);
                printf("Digite o segundo n�mero da divis�o: ");
                scanf("%f", &nu2);
                div = nu1 / nu2;
                printf(" %.2f / %.2f = %.2f", nu1, nu2, div);
                break;

            default:
                printf("Opera��o n�o existe!");
    }
    return 0;
}

