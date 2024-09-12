/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros, inserindo-os em uma lista
    de tamanho N. Em seguida, seu programa deve imprimir o maior valor informado e a posição dele na lista.
    Se o maior valor foi informado mais de uma vez, imprimir a posição do primeiro.
*/

#include <stdio.h>
#include <stdlib.h>

int maior(int vector[], int qtde){
    int maior = vector[0];
    int posicao = 0;
    for(int i = 1; i < qtde; i++){
        if(vector[i] > maior){
            maior = vector[i];
            posicao = i;
        }
    }

    printf("num: %d", maior);
    printf("indice: %d", posicao);
}

int main(){
    int qtde; 
    printf("Insira a qtde: ");
    scanf("%d", &qtde);

    int vetor[qtde];
    for(int i = 0; i < qtde; i++){
        int num;
        printf("insira o num: ");
        scanf("%d", &num);
        vetor[i] = num; 
    }

    maior(vetor, qtde);
    return 1;
    
}