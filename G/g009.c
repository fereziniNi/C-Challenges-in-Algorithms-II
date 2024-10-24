/*
    Faça um programa que leia um número inteiro não negativo N em base decimal. Em seguida, converta e imprima o número em base binária.
*/

#include <stdio.h>

int main(){
    int n;
    printf("insira o n: ");
    scanf("%d", &n);
    int bi = 0;

    int mult = 1;
    while(n > 0){
        int aux = 0;
        aux = n % 2;
        n /= 2;
        aux *= mult;
        bi += aux;
        mult *= 10;   
    }

    printf("%d", bi);

}