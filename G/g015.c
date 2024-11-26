/*
    Faça um programa que leia dois pontos P1 e P2, composto pelas coordenadas x e y. Após isso, calcule a distância euclidiana entre eles e imprima utilizando 4 casas decimais. Utilize struct para definir um ponto.
*/

#include <stdio.h>
#include <math.h>

float distanciaEuclidiana(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;

    printf("Primeiras Cordenadas");
    scanf("%f %f", &x1, &y1);
    
    printf("Segunda Cordenadas: ");
    scanf("%f %f", &x2, &y2);
    
    float distancia = distanciaEuclidiana(x1, y1, x2, y2);
    printf("%.2f\n", distancia);
    
    return 0;
}
