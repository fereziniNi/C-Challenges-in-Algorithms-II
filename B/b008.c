/*
    Faça um programa que leia três números inteiros A, B e C e imprima o maior deles.
*/

#include <stdio.h>

int main()
{
    printf("Insira 3 valores\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else if (b > c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}