/*
  Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um
  número inteiro X. Ao fim escreva a primeira posição na lista em que o valor X foi encontrado. Se X não
  estiver na lista, escrever -1.
*/

#include <stdio.h>
#include <stdlib.h>

int position(int vector[], int qtde, int n){
    for(int i = 0; i < qtde; i++){
        if(vector[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    int qtde;
    printf("insira a qtde");
    scanf("%d", &qtde);

    int vector[qtde];
    for(int i = 0; i < qtde; i++){
        int num;
        printf("insira o num: ");
        scanf("%d", &num);
        vector[i] = num;
    }

    printf("digite o num: ");
    int n;
    scanf("%d", &n);

    printf("%d", position(vector, qtde, n));
    
    return 1;
}
