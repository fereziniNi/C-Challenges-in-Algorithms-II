/*
    Faça um programa que leia uma string S e imprima a quantidade de caracteres de S. Não é permitido utilizar funções de string.h.
*/

#include <stdio.h>
#include "func.h"

int main(){
    char palavra[50];
    printf("string: ");
    scanf("%s", palavra);

    int res = contaPalavra(palavra);
    printf("%d", res);
}