/*
    Faça um programa que leia um valor inteiro N. Após isso, leia dois vetores A e B de tamanho N. Em seguida, o programa deve criar um vetor C com os elementos de A e B intercalados.
*/

#include <stdio.h>
#include <stdlib.h>

void intercala(int vet1[], int vet2[], int vet3[], int qtde) {
    int j = 0;
    for (int i = 0; i < qtde; i++) {
        vet3[j++] = vet1[i];
        vet3[j++] = vet2[i];
    }
}

int main(){
    printf("digite a qtde: ");
    int qtde;
    scanf("%d", &qtde);
    
    int* vet3 = malloc((sizeof(vet3)*qtde*2));

    int vet1[qtde];
    for(int i = 0; i < qtde; i++){
        printf("insira o número do %d posicao do vet 1: ", i);
        int n;
        scanf("%d", &n);
        vet1[i] = n;
    }

    int vet2[qtde];
    for(int i = 0; i < qtde; i++){
        printf("insira o numero do %d posicao da vet 2: ", i);
        int n;
        scanf("%d", &n);
        vet2[i] = n;
    }

    intercala(vet1, vet2, vet3, qtde);

    for(int j = 0; j < qtde * 2; j++){
        printf("%d  ", vet3[j]);
    }
    free(vet3);
    return 1;
}