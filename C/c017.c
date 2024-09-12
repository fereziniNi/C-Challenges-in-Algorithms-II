/*
    Faça um programa que leia um número inteiro N e imprima a soma de todos os fatoriais entre 0 e N (inclusive N). Não utilize bibliotecas matemáticas.
*/

#include <stdio.h>

int main(){
    int n, soma = 1;
    printf("Insira o N: ");
    scanf("%d", &n);
    int count = n;
    for(int i = 0; i < n; i++){
        int fat = 1, j = 1;
        while(count >= j){
            fat = fat * j;
            j++;
        }
        count--;
        soma += fat;
    }

    printf("%d\n", soma);
}