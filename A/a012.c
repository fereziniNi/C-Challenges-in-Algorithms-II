/*
    Sabe-se que uma lata de tinta tem um custo C e é capaz de pintar uma área de M metros quadrados. Faça um programa que leia a largura L, a altura A de uma parede, o valor C de uma lata de tinta e o rendimento M desta lata. Após isso, imprima quantas latas de tintas são necessárias e o custo total (com duas casas decimais). Assuma que não é possível comprar lata de tinta fracionada.
*/

#include <stdio.h>											
#include <math.h>

int main(){
    float custo, metros, preco, largura, altura, tt, rend, lata;

        printf("Insira por ordem\n1.Largura\n2.Altura\n3.Custo\n4.Rendimento\n");
        scanf("%f %f %f %f", &largura, &altura, &preco, &rend);

        metros = largura* altura;
        lata = metros/rend;
        tt = preco * lata;
        l = double ceil(lata);
        t = double ceil(tt);
        printf("Latas: %d\nPreço: %d", l, t);
        return 1;
}