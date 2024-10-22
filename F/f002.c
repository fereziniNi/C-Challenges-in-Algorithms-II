/*
    Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, o programa deve imprimir a soma de cada linha da matriz.
*/

#include <stdio.h>

int main(){
    printf("Insira o x: ");
    int x;
    scanf("%d", &x);
    printf("Insira o y: ");
    int y;
    scanf("%d", &y);

    int vet[x][y];

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            int n;
            printf("insira na posicao |%d|%d|: ", i, j);
            scanf("%d", &n);
            vet[i][j] = n;
        }
    }

    for(int n = 0; n < x; n++){
        int sum = 0;
        for(int m = 0; m < y; m++){
            sum += vet[n][m];
        }
        printf("%d\n", sum);
    }

    return 1;
}