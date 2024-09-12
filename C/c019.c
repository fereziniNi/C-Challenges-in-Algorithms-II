/*
    Considere que seu computador só consegue realizar operações de soma ou subtração, ou seja, está com as operações de divisão e multiplicação inoperantes. Faça um programa que leia dois números inteiros positivos A e B, onde A é a base e B é o expoente de uma potência. Após isso, calcule o valor da potência sem utilizar as operações inoperantes. Imprima o valor de A elevado a B.
Obs: Não utilize bibliotecas matemáticas. No caso de python, não é permitido usar o operador **. Faça sua solução utilizando laço de repetição.

*/

#include <stdio.h>

int pot(int a, int b){
    int resultado = 1; 
    for(int i = 0; i < b; i++){
        int aux = 0;
        for(int j = 0; j < resultado; j++){
            aux +=a;
        }
        resultado = aux;
    }

    return resultado;
}

int main(){
    int a, b;
    printf("Insira a base: ");
    scanf("%d", &a);
    printf("Agora o expoente: ");
    scanf("%d", &b);

    int result = pot(a, b);

    printf("\n|%d|\n", result);

}