/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, seu programa
    deve imprimir os N valores na ordem que foram lidos
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtde = 0;
    printf("insira a qtde: ");
    scanf("%d", &qtde);

    int vector[qtde];
    for(int i = 0; i < qtde; i++){
        printf("digite o num: ");
        int num;
        scanf("%d", &num);
        vector[i] = num;
    }

    printf("\n");
    for(int i = 0; i < qtde; i++){
        printf("%d  ", vector[i]);
    }

    return 1;
}