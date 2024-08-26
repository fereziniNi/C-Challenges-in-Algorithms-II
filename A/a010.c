/*
    Faça um programa que leia uma temperatura em graus Celsius e converta e escreva o correspondente em graus Fahrenheit (pesquise como essa conversão é feita).
*/

#include <stdio.h>

int main(){
    float  c, f;
    printf("Insira a temp\n");
    scanf("%f", &c);
    
    f = (c*1.8)+32;
    
    printf("%.2f", f);
    
    return 1;
}