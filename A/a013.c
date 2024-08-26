/*
    Faça um programa que leia um número inteiro S que representa uma quantidade de segundos. Seu programa deve imprimir quatro valores inteiros, que representam a quantidade de segundos S em dias, horas, minutos e segundos. Por exemplo, 188365 segundos representam 2 dias, 4 horas, 19 minutos e 25 segundos. Dica: lembre-se dos operadores resto e divisão inteira.
*/

#include <stdio.h>

int main(){
    int seg;
    printf("Insira a quantidade de segundos: \n");
    scanf("%d", &seg);

    int dia, horas, min;

    min = seg/60;
    seg = seg % 60;

    horas = min/60;
    min = min%60;

    dia = horas/24;
    horas = horas%24;

    printf("\n%d dias\n%d horas\n%d minutos\n%d segundos\n",dia, horas, min, seg);

    

}