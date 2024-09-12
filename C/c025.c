/*
    Faça um programa que leia um número inteiro e positivo N. Após isso leia N números inteiros. Ao fim, imprima 1 se a sequência de números lidos estão ordenados em forma crescente e -1 se estão ordenados de forma decrescente. Se não estão ordenados, imprima 0. Considere que uma sequência de tamanho N é crescente quando X1 <= X2 <= … <= XN e decrescente quando X1 >= X2 >= … >= XN. No caso desse exercício, se todos os valores lidos forem iguais, considere como um segmento crescente.
*/

#include <stdlib.h>
#include <stdio.h>

int ordenados(int vector[], int n){
    int count = 1;
    for (int i = 1; i < n; i++){
        if(vector[i-1] < vector[i]){
            count++;
        }else if(vector[i-1] > vector[i]){
            count--;
        }        
    }
    if(count == n){
        return 1;
    }else if(count < 0){
        return -1;
    }
    return 0;
}

int main(){
    int n;
    printf("Insira um num: ");
    scanf("%d", &n);

    int vector[n];
    for(int i = 0; i < n; i++){
        int x;
        printf("digite um num: ");
        scanf("%d", &x);
        vector[i] = x;
    }

    printf("%d\n", ordenados(vector, n));


}