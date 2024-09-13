/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista A de tamanho N. O programa deve inverter a lista A, dentro dela próprio, ou seja, sem criar outra lista adicional. Ao fim, seu programa deve imprimir a lista resultante B.
*/

#include <stdio.h>
#include <stdlib.h>

void inverte(int vet[], int qtde){
    for(int i = 0; i < qtde/2; i++){
        int primeiro = vet[i];
        vet[i] = vet[qtde - i - 1];
        vet[qtde - i - 1] = primeiro;
    }
}

int main(){
    int qtde;
    printf("insira o tamanho da len: ");
    scanf("%d", &qtde);

    int* vet = malloc(sizeof(vet)*qtde);

    for(int i = 0; i < qtde; i++){
        printf("digite o num: ");
        int num;
        scanf("%d", &num);
        vet[i] = num;
    }

    inverte(vet, qtde);

    for(int i = 0; i < qtde; i++){
        printf("%d  ", vet[i]);
    }

}
