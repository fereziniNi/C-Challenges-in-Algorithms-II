/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A. Em seguida seu programa deve ler um valor inteiro X e criar um vetor B que só deve ter elementos de A maiores que X, na mesma ordem em que estão em A. Por fim, o programa deve imprimir o vetor resultante A.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len;
    printf("digite o tamanho: ");
    scanf("%d", &len);

    int vetor[len];
    for(int i = 0; i < len; i++){
        printf("insira o num: ");
        int num;
        scanf("%d", &num);
        vetor[i] = num;
    }

    printf("insira o x: ");
    int x;
    scanf("%d", &x);

    int novoLen = 0;
    int novoVet[len];

    for(int i = 0; i < len; i++){
        if(vetor[i] > x){
            novoVet[novoLen] = vetor[i];
            novoLen++;
        }
    }

    for(int i = 0; i < novoLen; i++){
        printf("%d ", novoVet[i]);
    }


}