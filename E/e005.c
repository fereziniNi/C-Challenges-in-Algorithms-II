/*
    Faça um programa que leia duas strings A e B, e imprima 1 se A e B são anagramas e 0, caso contrário. Anagrama é a transposição de letras de palavra ou frase para formar outra palavra ou frase diferente. Por exemplo: "algoritmo" e “logaritmo” são anagramas. Seu programa deve desconsiderar caracteres de espaço.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(char* word1[], char* word2[], int i){
    int aux = 0;
    while(aux != 0){
    for(i; i < strlen(word1); i++){
        for(int j = 0; j <strlen(word1); j++){
            if(word1[i] == word2[j]){
                aux+=1;
            }
        }
    }
    return 0;
    }
    return 1;
}

void apagaEspaco(char* word){
    for(int i = 0; i < strlen(word); i++){
        if(word[i] == " "){
            for(int j = i; j < strlen(word); j++){
                word[j] = word[j + 1];
            }
        }
    }
    word[strlen(word)] = "\0";
}

int main(){
    printf("Insira a palavra 1: ");
    char* word1;
    fgets(word1, sizeof(word1), stdin);

    printf("Insira a palavra 2: ");
    char* word2;
    fgets(word2, sizeof(word2), stdin);

    apagaEspaco(word1);
    apagaEspaco(word2);
    if(strlen(word1) != strlen(word2)){
        printf("0");
    }else{
        int contador = 0;
        for(int i = 0; i < strlen(word1); i++){
            contador += compare(word1, word2, i);
        }
        
        if(contador == strlen(word1)){
            printf("1");
        }else{
            printf("0");
        }
    }
}