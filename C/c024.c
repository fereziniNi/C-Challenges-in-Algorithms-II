/*
    Faça um programa que leia um número inteiro N que indica a quantidade de números em um conjunto. Em seguida, leia os N números inteiros que compõem esse conjunto. Por fim, o programa deve imprimir dois números, que representam os dois maiores valores encontrados no conjunto, ordenados de forma decrescente.
*/

#include <stdio.h>

int main(){
    int maior, segundo = 0, n, qt;
    printf("Insira o numero: ");
    scanf("%d", &n);
    
    printf("Informe: ");
    scanf("%d", &qt);
    maior = qt;

    for(int i = 1; i < n; i++){
        printf("Informe: ");
        scanf("%d", &qt);
        if(qt > maior){
            segundo = maior;
            maior = qt;
        }else if(qt > segundo){
            segundo = qt;
        }

    }

    printf("%d\n", maior);
    printf("%d\n", segundo);
    return 1;
}