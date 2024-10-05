/*
    Faça um programa que leia uma string S, composta apenas por uma palavra. Seu programa deve imprimir
os caracteres de S na ordem que aparecem em S, separados por espaço.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    printf("Insira a palavra: ");
    scanf("%s", palavra);

    for(int i = 0; i < strlen(palavra); i++){
        printf("%c ", palavra[i]);
        if(i < (strlen(palavra) - 1)){
            printf(" ");
        }
    }

}