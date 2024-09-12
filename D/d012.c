/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor.
    Seu programa deve identificar o menor valor do vetor e trocá-lo de posição com o elemento do índice zero.
    Em seguida deve identificar o maior elemento e trocá-lo de posição com o elemento do último índice do
    vetor. Se acontecer mais de uma ocorrência do maior ou menor, considere a de menor índice. Por fim, seu
    programa deve imprimir o vetor resultante.
*/

#include <stdio.h>

int menor(int vet[], int qtde){
    int m = vet[0];
    for(int i = 1; i < qtde; i++){
        if(m > vet[i]){
            m = vet[i];
        }
    }  
    return m;
}

int maior(int vet[], int qtde){
    int m = vet[0];
    for(int i = 0; i < qtde; i++){
        if(m < vet[i]){
            m = vet[i];
        }
    }
    return m;
}

int troca(int vet[], int qtde, int max, int min){
    int primeiro = vet[0];
    vet[0] = min;
    vet[1] = primeiro;
    int ultimo = vet[qtde];
    vet[qtde] = max; 
    vet[qtde -1] = ultimo;
    
    for(int i = 2; i < qtde; i++){
        printf("| %d| ", vet[i]);
    }

}

int main(){
    int qtde;
    printf("insira as posições: ");
    scanf("%d", &qtde);

    int vet[qtde];
    for(int i = 0; i < qtde; i++){
        int num;
        printf("digite o num: ");
        scanf("%d", &num);
        vet[i] = num;
    }

    int min = menor(vet, qtde);
    int max = maior(vet, qtde);
    int novaArray[qtde];
    troca(vet, qtde, max, min);
    
}