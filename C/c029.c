/*
    Faça um programa que leia um número inteiro não negativo N e imprima "S" se ele é palíndromo e "N" caso
    contrário. Um número é palíndromo quando lido da esquerda para a direita é igual ao ser lido da direita
    para a esquerda. Exemplos: 37173, 1221.
    Obs: Faça seu programa utilizando apenas números inteiros. Não é permitido converter o número para
    string.
*/

#include <stdio.h>
#include <stdlib.h>

int palindromo(int num){
    int n2 = 0, n3 = 0;
    while(num > 0){
        n2 = num % 10;
        n3 = n3*10 + n2;
        num /= 10;
    }

    return n3;
}

int main(){
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);

    int result = palindromo(num);
    printf("%d\n",result);
}