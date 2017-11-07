#include <stdio.h>
#include <locale.h>

int main(void)
{
    int ope;
    float nu1, nu2, soma, div, mult, sub;
    setlocale(LC_ALL,"Portuguese");
    printf("Escolha uma operação:\n1 para SOMA\n2 para SUBTRAÇÃO\n3 para MULTIPLICAÇÃO\n4 para DIVISÃO\n");
    scanf("%d", &ope);

    switch (ope)
        {
            case 1:
                printf("Digite o primeiro número da soma: ");
                scanf("%f", &nu1);
                printf("Digite o segundo número: ");
                scanf("%f", &nu2);
                soma= nu1 + nu2;
                printf(" %.2f + %.2f = %.2f", nu1, nu2, soma);
                break;

            case 2:
                printf("Digite o primeiro número da subtração: ");
                scanf("%f", &nu1);
                printf("Digite o segundo número da subtração: ");
                scanf("%f", &nu2);
                sub = nu1 - nu2;
                printf(" %.2f - %.2f = %.2f", nu1, nu2, sub);
                break;

            case 3:
                printf("Digite o primeiro número da multiplicação: ");
                scanf("%f", &nu1);
                printf("Digite o segundo número da multiplicação: ");
                scanf("%f", &nu2);
                mult= nu1 * nu2;
                printf(" %.2f * %.2f = %.2f", nu1, nu2, mult);
                break;

            case 4:
                printf("Digite o primeiro número da divisão: ");
                scanf("%f", &nu1);
                printf("Digite o segundo número da divisão: ");
                scanf("%f", &nu2);
                div = nu1 / nu2;
                printf(" %.2f / %.2f = %.2f", nu1, nu2, div);
                break;

            default:
                printf("Operação não existe!");
    }
    return 0;
}

