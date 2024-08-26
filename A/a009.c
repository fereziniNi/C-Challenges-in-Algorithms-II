/*
  Faça um programa que leia três números reais A, B e C de uma equação do segundo grau, considerando: Ax^2 + Bx + C. Seu programa deve calcular e imprimir as as raízes da equação. Assuma que delta sempre será positivo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,delta, raiz, x, x1, x2;
    printf("bhaskara");
    printf("\n Insira os valores de A, B, C: \n");
    scanf(" %f %f %f", &a, &b , &c);
    delta = (b*b)-4*a*c;
    if(delta<0){
         printf("Não possui raiz...");
    }else{
        if(delta == 0){
          x = -b/(2*a);
          printf("%f", x);
        } else{
          raiz = sqrt(delta);
          x1 = (-b -raiz)/2*a;
          x2 = (-b +raiz)/2*a;
          printf("x1: %f\n x2: %f\n", x1, x2);
        }
         
    }

    return 1;
}