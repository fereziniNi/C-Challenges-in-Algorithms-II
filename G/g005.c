/*
    Faça um programa que leia as dimensões N e M de uma matriz A, representando o número de linhas e colunas respectivamente. Após isso, leia N x M valores em apenas uma linha, colocando-os na matriz A. Por fim, seu programa deve imprimir a matri A e a matriz transposta de A.
*/

#include <stdio.h>
#include <stdlib.h>

int **allocar(int n, int m) {
    int **mat = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        mat[i] = (int *)malloc(sizeof(int) * m);
    }
    return mat;
}

int **transpor(int **mat, int n, int m) {
    int **matTransposta = allocar(m, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            matTransposta[j][i] = mat[i][j];
        }
    }
    return matTransposta;
}

void imprimirMatriz(int linhas, int colunas, int **matriz) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Insira o n: ");
    scanf("%d", &n);
    printf("Insira o m ");
    scanf("%d", &m);

    int **mat = allocar(n, m);

    printf("Insira os %d valores da matriz A:\n", n * m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    imprimirMatriz(n, m, mat);
    int** transposta = transpor(mat, n, m);
    printf("\n\n");
    imprimirMatriz(m, n , transposta);


     for (int i = 0; i < n; i++) {
        free(transposta[i]);
    }
    free(transposta);

    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
