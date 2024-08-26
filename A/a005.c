/*
    Faça um programa que leia dois números inteiros. Após isso, seu programa deve imprimir o resultado das seguintes operações: 1) o valor da divisão real do primeiro número lido pelo segundo (imprimir com duas casas decimais); 2) o valor da divisão inteira do primeiro pelo segundo (imprimir como número inteiro); 3) o valor do resto da divisão do primeiro pelo segundo (imprimir como número inteiro).
*/

#include <stdio.h>

int main(){
    int  a,b;
    printf("Insira a seguir os num:\n");
    scanf("%d %d", &a, &b);
    float real = (float)a / b;
    int inte = a/b;
    float resto = a % b;
    

    printf("1-) %.2f\n", real);
    printf("2-) %d\n", inte);
    printf("3-) %d\n", resto);
    
    return 1;
}