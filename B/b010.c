/*
    B010. Classificação de triângulos
Sejam A, B e C os três lados de um triângulo. Faça um programa que leia o valor de três lados de um triângulo A, B e C. Seu algoritmo deve informar se o triângulo é: Escaleno (todos os lados diferentes); Isósceles (possui dois lados iguais); e Equilátero (todos os lados iguais); Não forma triângulo (quando a soma de dois lados é menor que o terceiro lado).
*/

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Digite os três lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Isósceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Não forma triângulo\n");
    }

    return 0;
}
