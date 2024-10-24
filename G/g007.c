/*
    Faça um programa que leia uma string S e imprima a quantidade de vogais de S. Considere que S contém apenas caracteres do alfabeto (minúsculos e sem acentuação) e o caractere de espaço.
*/

#include <stdio.h>

int main(){
    int count = 0;
    char* palavra;

    printf("insira a palavra: ");
    fgets(palavra, 100, stdin);

    for(int i = 0; palavra[i] != '\n'; i++){
        char letra = palavra[i];
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra =='u'){
            count++;
        }
    }

    printf("qtde de vogal: %d", count);


}