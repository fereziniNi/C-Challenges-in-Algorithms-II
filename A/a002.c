/*
    Faça um programa que leia dois números inteiros e imprima o valor da soma deles, a diferença
    do primeiro pro segundo e a multiplicação entre eles.
*/
#include <stdio.h>

int main(){
    int a,b,soma,mult,sub;
    printf("Insira a seguir o num A E B:\n");
    scanf("%d %d", &a, &b);
    soma = a+b;
    sub = a-b;
    mult = a*b;
    
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", sub);
    printf("Multiplicação: %d\n", mult);
    
    return 1;
}