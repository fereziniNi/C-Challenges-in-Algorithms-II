/*
    Em épocas de crise, comerciantes estão oferecendo descontos para aumentarem suas vendas. Faça um programa que leia o valor total da compra e um valor de desconto (de 0 a 100, representando a porcentagem de desconto). O programa de escrever o valor da compra com o desconto aplicado. Escreva a saída com duas casas decimais.
*/

#include <stdio.h>

int main(){
    float  preco, desconto, resultado;
    printf("Insira o preço e o desconto\n");
    scanf("%f %f", &preco, &desconto);
    if(desconto < 0 || desconto > 100){
        printf("Insira um valor entre 0 e 100");
        scanf("%f", &desconto);
    }
    desconto = (desconto / 100)*preco;
    resultado = preco - desconto;
    
    printf("%.2f\n", resultado);
    
    return 1;
}