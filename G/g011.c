/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um vetor B de tamanho M. Assuma que A e B sempre estarão ordenados de forma crescente.
    O programa deve juntar os valores de A e B em um vetor C, de forma que C também esteja ordenado. Ao final, escreva o vetor C resultante. Não é permitido utilizar algoritmo de ordenação.
*/

#include <stdio.h>
#include <stdlib.h>

void junta(int *vetc, int veta[], int lena, int vetb[], int lenb)
{
    int j = 0, i = 0, count = 0;
    ;
    while (lena > i && lenb > j)
    {
        if (veta[i] <= vetb[j])
        {
            vetc[count++] = veta[i++];
        }
        else
        {
            vetc[count++] = vetb[j++];
        }
    }
    while (i < lena)
    {
        vetc[count++] = veta[i++];
    }
    while (j < lenb)
    {
        vetc[count++] = vetb[j++];
    }
}

int main()
{
    int lena, lenb;
    printf("insira o tamanho do vet a: ");
    scanf("%d", &lena);
    int veta[lena];

    printf("digite a sequencia dos vetores: ");
    for (int i = 0; i < lena; i++)
    {
        int num;
        scanf("%d", &num);
        veta[i] = num;
    }

    printf("insira o tamanho do vet b: ");
    scanf("%d", &lenb);
    int vetb[lenb];

    printf("digite a sequencia dos vetores: ");
    for (int i = 0; i < lenb; i++)
    {
        int num;
        scanf("%d", &num);
        vetb[i] = num;
    }

    int* vetc = (int*)malloc(sizeof(int) * (lena + lenb));
    junta(vetc, veta, lena, vetb, lenb);

    for (int i = 0; i < lena + lenb; i++)
    {
        printf("%d ", vetc[i]);
    }

    free(vetc);
}