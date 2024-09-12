/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida, seu programa
    deve imprimir os N valores na ordem inversa que foram lidos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtde;
    printf("Insira a qtde:  ");
    scanf("%d", &qtde);

    int vector[qtde];

    for(int i = 0; i < qtde; i++){
        printf("digite o num: ");
        int n;
        scanf("%d", &n);
        vector[i] = n;
    }


    for(int i = qtde; i >= 0; i--){
        printf("%d ", vector[i]);
    }

    return 1;
}