/*
    Um motorista de Uber estipula o preço de uma determinada viagem dada a quantidade de quilômetros percorrida. Para viagens de até X km, é cobrado um valor R$ V1 por km. Acima de Y km, é cobrado o valor R$ V2. Faça um programa que leia X, V1, V2 e a quantidade de quilômetros A da viagem e imprima o valor total com duas casas decimais.
*/

#include <stdio.h>

int main()
{
    int km, qtde;
    double valor, acrescimo;

    printf("Insira o valor do KM! ");
    scanf("%d", &km);

    printf("\nValor por KM!");
    scanf("%lf", &valor);

    printf("\nValor acima por KM!");
    scanf("%lf", &acrescimo);

    printf("\nKilometragem acima!");
    scanf("%d", &qtde);

    double total;

    if (qtde >= km)
    {
        total = (valor * km) + ((qtde - km) * acrescimo);
    }
    else
    {
        total = qtde * valor;
    }

    printf("\nTOTAL DA VIAGEM: %.2f", total);
}