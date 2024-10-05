/*
    Faça um programa que leia uma string S e um caractere C. Ao fim escreva o número de vezes que o caractere C aparece na string S.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    printf("insira a palavra: ");
    scanf("%s", palavra);

    char letra[0];
    printf("letra: ");
    scanf("%s", letra);

    int count = 0;
    for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] == letra[0]){
            count++;
        }
    }

    printf("%d", count);
    return 1;
}