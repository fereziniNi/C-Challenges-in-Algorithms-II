/*
   Faça um algoritmo que leia 3 valores inteiros A, B e C. Coloque-os em ordem crescente (ou seja, ao final A deve armazenar o menor valor, C o maior e B o valor do meio). Utilize o modelo abaixo apresentado no final do exercício, modificando apenas o processamento 
*/

#include <stdio.h>

int main(){
    printf("Insira 3 valores abaixo:\n");
    int a, b, c, aux;
    scanf("%d %d %d", &a, &b, &c);

if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("%d -- %d -- %d", a, b, c);
}
