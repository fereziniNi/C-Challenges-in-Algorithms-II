/* 
    Faça um programa que leia dois números inteiros e imprima a soma deles.
*/
#include <stdio.h>

int main()
{
    int soma,a,b;
    printf("Insira o valor A e B: \n");
    scanf("%d %d", &a, &b);
    soma = a+b;
    printf("\n%d", soma);

    return 0;
}