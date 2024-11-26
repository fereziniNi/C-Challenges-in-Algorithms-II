/*
    Uma molécula de DNA é uma dupla hélice formada por duas fitas compostas por uma sequência de quatro nucleotídeos: citosina (C), timina (T), adenina (A) e guanina (G). Quando se tem a informação de quais nucleotídeos formam uma fita é possível saber qual é a fita complementar, pois o nucleotídeo A se liga com T e o nucleotídeo C se liga com G. Por exemplo, se uma das fitas for a sequencia TCGACCA, a fita complementar é AGCTGGT.
    Faça um programa que leia uma fita de DNA e o imprima com as duas fitas. Considere que a sequência lida terá apenas letras maiúsculas

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("insira a fita de dna: ");
    char fita[100];
    scanf("%s", fita);

    int tamanho = strlen(fita);
    char *complementar = (char *)malloc(tamanho + 1);

    for (int i = 0; i < tamanho; i++)
    {
        char letra = fita[i];
        if (letra == 'A'){
            complementar[i] = 'T';
        }
        else if (letra == 'T'){
            complementar[i] = 'A';
        }
        else if (letra == 'C'){
            complementar[i] = 'G';
        }
        else if (letra == 'G'){
            complementar[i] = 'C';
        }
    }
    complementar[tamanho] = '\0';
    printf("%s\n", fita);
    printf("%s", complementar);

    free(complementar);
}