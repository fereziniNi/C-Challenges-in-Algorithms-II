/*
    Você está na Austrália treinando cangurus para se locomoverem em linha reta. Você quer saber se dois cangurus estarão na mesma posição em um determinado tempo, dado a posição inicial de cada canguru e qual a distância que eles saltam. Como você sabe programar muito bem, você decidiu fazer um programa para isso. Seu programa deve ler:
    - A posição inicial X1 e a distância do pulo V1 do primeiro canguru.
    -A posição inicial X2 e a distância do pulo V2 do segundo canguru.
    Após isso, seu programa deve imprimir SIM se os dois cangurus se encontrarão no mesmo ponto e NAO caso eles nunca se encontrem.
    Por exemplo, o primeiro canguru começa em X1 = 2 e tem uma distância do pulo de V1 = 1. O segundo canguru começa em X2 = 1 e tem uma distância de pulo de V2 = 2. Após um pulo ambos estarão no ponto 3, portanto a resposta é SIM.
*/

#include <stdio.h>

int main(){
    int v1,v2,x1,x2;
    printf("X1: ");
    scanf("%d", &x1);
    printf("V1: ");
    scanf("%d", &v1);

    printf("X2: ");
    scanf("%d", &x2);
    printf("V2: ");
    scanf("%d", &v2);

    if(v1 == v2){
        if(x1 == x1){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }else{
        if((x2 - x1) / (v1 - v2) >= 0){
            printf("SIM\n");
        }else{
            printf("NÃO\n");
        }
    }
    return 0;
}