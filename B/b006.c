/*
    Faça um programa que leia os coeficientes a, b e c de uma equação do segundo grau ax² + bx + c. Após isso, calcule e imprima a soma das raízes da equação. Se as raízes não forem reais, imprima nan (use print(math.nan))
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double delta, resultado;
    printf("Digite o a, b e c da equacao do segundo grau: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("%f\n", nan(""));
    }
    else
    {
        resultado = -b / a;
        printf("%f\n", resultado);
    }
    return 0;
}
