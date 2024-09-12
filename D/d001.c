/*
    Faça um programa que leia dados de temperatura durante uma semana (7 leituras), armazenando em uma
    lista. Após isso, seu programa deve imprimir quantos dias dessa semana a temperatura esteve acima da
    média.
*/

#include <stdio.h>
#include <stdlib.h>

int temp(int vetor[]){
    int total  = 0;
    for(int i = 0; i < 7; i++){
        total += vetor[i];
    }
    total /= 7;
    int contador = 0;
    for(int i = 0; i < 7; i++){
        if(vetor[i] > total){
            contador++;
        }
    }
    return contador;
}

int main(){
    int vector[7];
    for(int i = 0; i < 7; i ++){
        printf("Insira a temp: ");
        int num;
        scanf("%d", &num);
        vector[i] = num;        
   }

    int result = temp(vector);
    printf("%d", result);

}