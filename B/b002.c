/*
    A avenida principal da cidade de Algoritmopolis possui limite de velocidade de L km/h. Se o motorista ultrapassar essa velocidade, é aplicado uma multa de R$ M, mais R$ A por cada km acima do limite. Faça um programa que leia o limite L, o valor da multa M, o valor adicional A e a velocidade V captada pelo radar e informe o valor total da multa. Considere L e V sempre como números inteiros. Apresente a resposta com duas casas decimais.
*/
#include <stdio.h>

int main()
{
    int limite, multa, adicional, velocidade;
    printf("LIMITE EM KM: ");
    scanf("%d", &limite);

    printf("\nMULTA EM R$: ");
    scanf("%d", &multa);

    printf("\nVALOR ADICIONAL: ");
    scanf("%d", &adicional);

    printf("\nVELOCIDADE CAPTURADA: ");
    scanf("%d", &velocidade);

    int total;

    if (velocidade >= limite)
    {
        total = multa;
        velocidade -= limite;
        total += (velocidade * adicional);
    }
    else
    {
        total = 0;
    }

    printf("\n%d", total);
}