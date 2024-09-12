/*
    Faça um programa que leia um número inteiro positivo N e imprima a soma dos dígitos desse número. Por exemplo, se a entrada for 358, a saída será 16 (3 + 5 + 8). Obs: Não é permitido transformar os números em strings, ou seja, resolva o problema apenas utilizando operações matemáticas válidas.
*/

#include <stdio.h>

int main(){
    int n, total = 0;
    printf("Insira o N: ");
    scanf("%d", &n);
    while(n > 0){
        int var = 0;
        var = n%10;
        total += var;
        n /= 10;
    }
    printf("%d", total);

}