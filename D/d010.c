/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. A cada valor lido, o
    programa deve inserir em uma lista A se o valor for par e em uma lista B se o valor for ímpar. Ao fim,
    escreva as duas listas resultantes, na primeira linha a lista A e na segunda a lista B.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int lenT;
    printf("insira o n: ");
    scanf("%d", &lenT);

    int vector[lenT];
    for(int i = 0; i < lenT; i++){
        printf("digite o num: ");
        int num;
        scanf("%d", &num);
        vector[i] = num;
    }

    int vetPar[lenT];
    int vetImpar[lenT];

    int lenP = 0;
    int lenI = 0;

    for(int i = 0; i < lenT; i++){
        if(vector[i] % 2 == 0){
            vetPar[lenP] = vector[i];
            lenP++;
        }else{
            vetImpar[lenI] = vector[i];
            lenI++;
        }
    }

    for(int i = 0; i < lenI; i++){
        printf("%d ", vetImpar[i]);
    }

    printf("\n");

    for(int i = 0; i < lenP; i++){
        printf("%d ", vetPar[i]);
    }

    printf("\n");
}