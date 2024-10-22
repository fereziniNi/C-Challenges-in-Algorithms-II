/*
    Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, imprima a matriz em formato matricial.
*/

#include <stdio.h>

int main(){
    int coluna;
    int linha;
    printf("Insira a qtde de coluna: ");
    scanf("%d", &coluna);

    printf("Insira a qtde de linha: ");
    scanf("%d", &linha);

    int vet[coluna][linha];

    for(int x = 0; x < coluna; x++){
        for(int y = 0; y < linha; y++){
            printf("Insira na posicao |%d||%d|: ", x, y);
            int num;
            scanf("%d", &num);
            vet[x][y] = num;
        }
    }

    for(int x = 0; x < coluna; x++){
        for(int y = 0; y < linha; y++){
            printf("%d ", vet[x][y]);
        }
        printf("\n ");
    }
    
    return 1;
}