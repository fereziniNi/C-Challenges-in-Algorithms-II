/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em uma lista.
    Em seguida, seu programa deve trocar os elementos dos índices adjacentes, par a par. Por exemplo, deve
    ser trocado o elemento do índice 0 com o do índice 1, em seguida o elemento do índice 2 com o do índice 3
    e assim sucessivamente. Por fim, seu programa deve imprimir a lista resultante.
*/
#include <stdio.h>
#include <stdlib.h>

int revira(int n, int vector[]){
    int max = n%2==0 ? n : n - 1;

    for(int i = 0; i < max / 2; i++){
        int j;
        j = vector[i];
         vector[i] = vector[max - 1 - i];
        vector[max -1 - i] = j;
        }

    for(int i = 0; i < n; i++){
        printf("%d ", vector[i]);
    }

}

int main(){
    int n;
    printf("digite a qntde: ");
    scanf("%d", &n);

    int vector[n];
    for(int i = 0; i < n; i++){
        printf("insira: ");
        int num;
        scanf("%d", &num);
        vector[i] = num;
    }

    int result = revira(n, vector);

    return 1;
}