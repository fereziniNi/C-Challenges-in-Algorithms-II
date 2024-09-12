/*
   Faça um programa que leia um conjunto de valores que correspondem as idades de pessoas de uma comunidade. Quando o valor fornecido for um número negativo, significa que não existem mais idades para serem lidas. Após a leitura, seu programa deve informar:
  -A média das idades das pessoas (com duas casas decimais)
  -A quantidade de pessoas maiores de idade
  -A porcentagem de pessoas idosas (considere que uma pessoa idosa tem mais de 75 anos) (com duas casas decimais)
 
*/

#include <stdio.h>

int main(){
    double media= 0, n = 1, qtde = 0, velho = 0, adulto = 0;

    printf("Insira a idade: ");
    scanf("%lf", &n);

    while (n > 0){
        media += n;
        if(n > 17){
            adulto++;
        }
        if(n > 74){
            velho++;
        }
        qtde++;
        printf("Insira a idade: ");
        scanf("%lf", &n);
    }

    printf("%.2lf\n", (media/qtde));
    printf("%.0lf\n", adulto);
    printf("%.2f%\n", (velho*100)/qtde);

}