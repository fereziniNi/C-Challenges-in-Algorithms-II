/*
    Faça um programa que leia dois números inteiros positivos A e B e faça o cálculo de multiplicação de A e B usando apenas a operação de soma. Imprima o resultado ao final.
*/

#include <stdio.h>

int mult(int a, int b){
    int soma = 0;
    for(int i= 0; i < a; i++){
        soma += b;
    }
    return soma;
}


int main(){
    int a, b;
    printf("Insira a: ");
    scanf("%d", &a);
    printf("Insira o b: ");
    scanf("%d", &b);

    printf("\n%d\n", mult(a, b));

}