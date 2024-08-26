/*
    Faça um programa que leia a idade de um eleitor e imprima se ele é eleitor facultativo (entre 16 e 17 anos), eleitor obrigatório (entre 18 a 69) ou dispensado (acima de 70 ou menor que 16).
*/

#include <stdio.h>

int main(int argc, char argv[])
{
    int idade;
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    if (idade > 17 && idade <= 69)
    {
        printf("Obrigatorio\n");
    }
    else if (idade < 16 || idade > 69)
    {
        printf("Dispensado\n");
    }
    else
    {
        printf("Facultativo\n");
    }
}