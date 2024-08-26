/*
    Faça um programa que leia o valor dos catetos de um triângulo retângulo e calcule a hipotenusa, de acordo com o Teorema de Pitágoras. Pesquise como extrar a raiz quadrada de um número.
*/

#include <stdio.h>
#include <tgmath.h>

int main(){
    float  a, b, c;
    printf("Insira o A e o B\n");
    scanf("%f %f", &a, &b);
    
    c = (a*a) + (b*b);
    
    printf("%.2f", sqrt(c));
    
    return 1;
}