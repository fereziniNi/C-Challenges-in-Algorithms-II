/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso, leia dois números inteiros I e X, que indicam respectivamente o índice do vetor e um elemento do vetor. Seu programa deve inserir o elemento X no índice I e imprimir o vetor resultante.
    Ao inserir um elemento em determinado índice, seu programa deve deslocar os elementos do vetor para a direita, de forma a não perder elementos e manter a ordenação original do vetor A. Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao inserir o elemento X = 0 na posição I = 2, o vetor resultante deve ser [2, 5, 0, 3, 9]. Se o índice I informado for negativo, seu programa deve imprimir a mensagem INVALIDO. Se I for maior que o tamanho do vetor, o elemento deve ser inserido na última posição.
*/

#include <stdio.h>
#include <stdlib.h>

void adicionar(int vet[], int *n, int x, int i) {
    if (i >= *n) {
        vet[*n] = x;
    } else {
        for (int j = *n; j > i; j--) {
            vet[j] = vet[j - 1];
        }
        vet[i] = x;
    }

    (*n)++;
}

int main() {
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++) {
        printf("Insira um elemento na posicao |%d|: ", i);
        scanf("%d", &vet[i]);
    }

    int x;
    printf("Digite um novo elemento: ");
    scanf("%d", &x);

    int i;
    printf("Digite a posicao: ");
    scanf("%d", &i);

    adicionar(vet, &n, x, i);

    printf("Vetor resultante: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", vet[j]);
    }
    printf("\n");

    return 0;
}
