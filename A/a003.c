/*
    Faça um programa que leia duas notas de provas e calcule e escreva a média simples delas. Escreva a saída com duas casas decimais.
*/
#include <stdio.h>

int main(){
    float a,b,media;
    printf("Insira a seguir as notas:\n");
    scanf("%f %f", &a, &b);
    media = (a+b)/2;
    
    printf("Media: %.2f\n", media);
    
    return 1;
}