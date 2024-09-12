/*
    Faça um programa que leia um valor inteiro N. Após isso, leia duas listas A e B de tamanho N e coloque a
    soma das duas listas em uma terceira lista C. Por exemplo C[0] = A[0] + B[0], C[1] = A[1] + B[1]. Por fim,
    imprima a lista resultante C.
*/

#include <stdio.h>
#include <stdlib.h>

int somaVetor(int vetA[], int vetB[], int n){
    int vetC[n];
    for(int i = 0; i < n; i++){
        vetC[i] = vetA[i] + vetB[i];
    }

    for(int i = 0; i < n; i++){
        printf("%d  ", vetC[i]);
    }

    return 1;
}

int main(){
    int n;
    printf("insira a qtde da lista: ");
    scanf("%d", &n);
    
    int vetA[n];
    for(int i = 0; i < n; i++){
        int num;
        printf("digite a[%d]: ", i);
        scanf("%d", &num);
        vetA[i] = num;
    }
 
    int vetB[n];
    for(int i = 0; i < n; i++){
        int num;
        printf("digite b[%d]: ", i);
        scanf("%d", &num);
        vetB[i] = num;
    }

    somaVetor(vetA, vetB, n);



}