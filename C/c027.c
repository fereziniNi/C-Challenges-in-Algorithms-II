/*
    Faça um programa que leia um número inteiro positivo N e imprima "S" se for um número perfeito e "N"
caso contrário. Um número é perfeito se for igual à soma de seus divisores positivos diferentes de N. Por
exemplo, 6 é perfeito, pois 1 + 2 + 3 = 6.
*/

#include <stdio.h>
#include <stdlib.h>

int numPerfeito(int num){
    int soma = 0;
    for(int i = 1; i < num; i++){
        if(num%i == 0){
            soma += i;
        }
    }
        if(soma == num){
            return 1;
        }
        return 0;

}

int main(){
    int num;
    printf("Insira o num: ");
    scanf("%d", &num);
    int resultado = numPerfeito(num);
    if(resultado == 1){
        printf("\nS\n");
    }else{
        printf("\nN\n");
    }
}