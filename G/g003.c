/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso leia um número inteiro X. Seu programa deve remover todas as ocorrências do elemento X e imprimir o vetor resultante.
*/

#include <stdio.h>
void delete(int vet[], int *n, int posicao){
    for(int i = posicao; i < *n; i++){
        vet[i] = vet[i+1];
    }
}

int main(){
    printf("insira a quantidade: ");
    int n;
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("insira um x: ");
        int x;
        scanf("%d", &x);
        vet[i] = x;
    }

    int num;
    printf("insira o num: ");
    scanf("%d", &num);
    int count = 0;

    for(int i = 0; i < n; i++){
        if(vet[i] == num){
            delete(vet, &n, i);
            count++;
        }
    }
    n -= count;

    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n|tamanho do n: %d|\n", n);
    return 1; 
}