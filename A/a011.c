/*
    Faça um programa que leia o salário fixo de um vendedor e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 18% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.
*/
#include <stdio.h>

int main(){
    float  salario, vendas, tt;
    int bonus = 18;
    printf("Insira o salario e as vendas\n");
    scanf("%f %f", &salario, &vendas);
    
    tt = salario + vendas*bonus/100;
    printf("%.2f", tt);
    
    return 1;
}