/*
    Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, o programa deve imprimir a soma de cada coluna da matriz.
*/

#include <stdio.h>

int main(){
    printf("Insira o n:");
    int n;
    scanf("%d", &n);

    printf("Insira o m:");
    int m;
    scanf("%d", &m);

    int vet[n][m];

    for(int i= 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("insira na posicao |%d|%d|: ", i, j);
            int x;
            scanf("%d", &x);
            vet[i][j] = x;
        }
    }

    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += vet[j][i];
        }
        printf("|%d|", sum);
    }

    return 1;
}