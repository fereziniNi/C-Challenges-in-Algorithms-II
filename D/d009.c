/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista.
    Em seguida, leia dois valores I e J que correspondem a duas posições na lista. Ao final, o programa deve
    escrever a soma dos elementos entre I e J, incluindo os elementos de I e J. Se I ou J forem posições inválidas
    na lista, imprimir a mensagem INVALIDO.
*/

#include <stdio.h>
#include <stdlib.h>

int conta(int vector[], int n, int i, int j){
    if(j-1 > n){
        return 0;
    }else{
    int soma = 0;
    for(int z = i; z <= j; z++){
        soma += vector[z];
    }
    return soma;
    }

}

int main(){
    int n;
    printf("insira o n: ");
    scanf("%d", &n);

    int vector[n];
    for(int i = 0; i < n; i++){
        printf("digite: ");
        int num;
        scanf("%d", &num);
        vector[i] = num;
    }

    int i,j;
    printf("Insira o i: ");
    scanf("%d", &i);
    printf("insira o j: ");
    scanf("%d", &j);

    int result = conta(vector, n, i, j);
    result > 1 ? printf("%d", result) : printf("INVALIDO");
}