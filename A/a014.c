/*
   Faça um programa que leia um número inteiro (assuma que esse número terá 4 dígitos obrigatoriamente) e inverta esse número. Por fim escreva o número invertido. O seu programa deve apenas manipular números inteiros. Não é permitido usar strings, lista, etc. 
*/

#include <stdio.h>

int main(){
    int num;
    printf("Insira seu número: \n");
    scanf("%d", &num);

    int invertido;

    for(int i = 0; i < 4; i++){
        invertido = num % 10;
        num =  num / 10;

        printf("%d", invertido);
    }
    printf("\n");
    

}