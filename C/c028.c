/*
    Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em
seguida, leia os N números inteiros que compõem esse conjunto. O programa deve imprimir o
comprimento de um segmento crescente de tamanho máximo. Por exemplo, na sequência [3, 7, 4, 3, 6, 8,
9, 2, 5], o segmento crescente máximo é [3, 6, 8, 9], portanto seu comprimento é 4. Considere que um
segmento de tamanho N é crescente quando X1 <= X2 <= … <= XN.
*/

#include <stdio.h>
#include <stdlib.h>

int segmentoCres(int vector[], int num){
    int qtde = 1, reserva = 1;
    for(int i = 1; i < num; i++){
        if(vector[i-1] < vector[i]){
            qtde += 1;
        }else{
            if(qtde > reserva){
                reserva = qtde;
            }
            qtde = 1;
        }
    }
    if(qtde > reserva){
        reserva = qtde;
    }
    return reserva;
}

int main(){
    int num;
    printf("digite a quantidade de termos: ");
    scanf("%d", &num);
    int vector[num];

    for(int i = 0; i < num; i++){
        printf("insira o num: ");
        int n; 
        scanf("%d", &n);
        vector[i] = n;
    }

    int resultado = segmentoCres(vector, num);
    printf("%d", resultado);


}