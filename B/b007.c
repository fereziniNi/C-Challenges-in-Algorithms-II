/*
    Faça um algoritmo que leia 2 valores inteiros A e B. Coloque-os em ordem crescente (ou seja, ao final A deve armazenar o menor valor e B o maior valor). Utilize o modelo abaixo apresentado no final do exercício, modificando apenas o processamento
*/

#include <stdio.h>

int main()
{
    printf("Informe o A e B:\n");
    int a, b, aux;
    scanf("%d %d", &a, &b);
    if (b < a)
    {
        aux = a;
        a = b;
        b = aux;
    }

    printf("%d -- %d", a, b);
}