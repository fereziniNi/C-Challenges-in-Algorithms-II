/*
    Faça um programa que leia dois números inteiros e imprima o maior deles.
*/
#include <stdio.h>

int maior_dois_numeros(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    printf("Insira o A e o B:\n");
    scanf("%d\n%d\n", &a, &b);
    int res = maior_dois_numeros(a, b);

    printf("%d\n", res);
    return 0;
}