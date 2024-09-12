/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros. Em seguida leia um
    número inteiro X. Ao fim escreva o número de vezes que o número X foi lido do usuário
*/

#include <stdio.h>
#include <stdlib.h>

int contaNum(int vector[], int qtde, int n){
    int contador = 0;
    for(int i = 0; i < qtde; i++){
        if(vector[i] == n){
            contador += 1;
        }
    }
    return contador;
}

int main(){
    int qtde;
    printf("insira o num: ");
    scanf("%d", &qtde);

    int vector[qtde];
    for(int i = 0; i < qtde; i++){
        printf("\ndigite o num: ");
        int num;
        scanf("%d", &num);
        vector[i] = num;
    }

    int n;
    printf("selecione o num: ");
    scanf("%d", &n);


    printf("|%d|\n", contaNum(vector, qtde, n));

    return 1;
}