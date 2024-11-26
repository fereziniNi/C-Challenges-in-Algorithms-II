/*
    Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y, em que P1 e P2 representam pontos adjascentes na diagonal de um retângulo. O programa deve calcular e imprimir a área do retângulo utilizando quatro casas decimais.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    printf("P1: ");
    scanf("%f %f", &x1, &y1);

    printf("P2: ");
    scanf("%f %f", &x2, &y2);
    double largura = fabs(x2 - x1);
    double altura = fabs(y2 - y1);
    double area = largura * altura;
    printf("%.4f\n", area);

    return 0;
}
