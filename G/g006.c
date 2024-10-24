/*
    Faça um programa que leia uma string S e imprima a quantidade de caracteres de S. Não é permitido utilizar funções de string.h.
*/

#include <stdio.h>

int main(){
    char palavra[100];
    int count = 0;
    printf("insira a string: ");
    scanf("%s", &palavra);

    for(int i = 0; palavra[i] != '\0'; i++){
        count++;
    }

    printf("len: %d", count);


}