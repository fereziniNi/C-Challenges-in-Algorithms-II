/*
    Faça um programa que leia uma string S e imprima imprima 1 se ela é palíndromo e 0 caso contrário. Uma string é palíndromo se quando lido da esquerda para a direita é igual ao ser lido da direita para a esquerda. Exemplos: "arara", "amor e roma". Observações importantes: 1) Seu programa deve desconsiderar caracteres de espaço; 2) Seu programa NÃO deve criar uma string auxiliar, ou seja, ele deve dizer se a string é palíndromo apenas acessando/consultando seus caracteres.

*/

#include <stdio.h>
#include <string.h>

int confere(char* string){
    int j = strlen(string) -1, i = 0;
    while(i < j){
        if(string[i] != string[j]){
            if(string[i] != " " || string[j] != " "){
                return 0;
            }
        }
        i++;
        j--;
    }
    return 1;
}

int main(){
    printf("insira a palavra: ");
    char* string;
    fgets(string, sizeof(string), stdin);

    printf("%d", confere(string));

}