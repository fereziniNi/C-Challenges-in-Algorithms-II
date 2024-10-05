/*
    Faça um programa que leia uma string S, composta apenas por uma palavra. Seu programa deve imprimir os caracteres de S na ordem inversa que aparecem em S, separados por espaço.
*/

#include <stdio.h>
#include <string.h>

int main(){
    printf("palavra: ");
    char palavra[50];
    scanf("%s", palavra);

    for(int i = strlen(palavra); i >= 0 ; i--){
        printf("%c", palavra[i]);
        printf(" ");
    }
    return 1;
}