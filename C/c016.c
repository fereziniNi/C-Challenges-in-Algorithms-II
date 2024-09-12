/*
Faça um programa que leia um número inteiro N e imprima a soma de todos os números primos entre 1 e N (inclusive N).  
*/

#include <stdio.h>

int main(){
    int n, soma = 0;
    printf("Insira o N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i==2 || i==3 || i == 5){
            soma += i;
        }else if(i%2!=0 && i%3!=0 && i%5!=0){
            soma += i;
        }
    }


    printf("\n%d\n", soma-1);
    return 0;
}