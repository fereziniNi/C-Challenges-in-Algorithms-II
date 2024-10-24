/*
    Faça um programa que leia um número inteiro não negativo N em base decimal. Em seguida, converta e imprima o número em base binária.
*/

#include <stdio.h>

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }else{
        for(int i = 0; i < expoente; i++){
            base *= 2;
        }
    }
    return base;
}


int main(){
    int binary;
    printf("insira o binario: ");
    scanf("%d", &binary);

    int sum = 0;
    int count = 0;
    int auxbinary = binary;
    
    while(auxbinary>0){
        int last = auxbinary%10;
        int valor = potencia(1, count) * last;

        sum += valor;
        count++;
        auxbinary/=10; 
    }   

    printf("\n %d \n\n", sum);
    
}