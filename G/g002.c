/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Após isso leia um número inteiro I, que indica um índice do vetor. Seu programa deve remover o elemento do índice I e imprimir o vetor resultante.
    Ao remover um elemento, seu programa deve deslocar os elementos do vetor para a esquerda. Por exemplo, considerando o vetor A = [2, 5, 3, 9], ao remover o elemento na posição I = 1, o vetor resultante deve ser [2, 3, 9]. Se o índice I informado for inválido, seu programa deve imprimir a mensagem INVALIDO.
*/

#include <stdio.h>
void delete(int vet[], int *n, int posicao){
    for(int i = posicao; i < *n; i++){
        vet[i] = vet[i+1];
    }
    (*n)--;
}

int main(){
    printf("insira a quantidade: ");
    int n;
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("insira um x: ");
        int x;
        scanf("%d", &x);
        vet[i] = x;
    }

    int posicao;
    printf("insira a posicao: ");
    scanf("%d", &posicao);

    if(posicao > n){
        printf("INVALIDO");
    }else{
        delete(vet, &n, posicao);
        for(int i = 0; i < n; i++){
            printf("%d ", vet[i]);
        }
    }
    printf("\n|tamanho do n: %d|\n", n);
    return 1; 
}