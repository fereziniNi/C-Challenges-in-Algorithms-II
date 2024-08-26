/*
    Faça um programa que leia um número inteiro E de eleitores de um município, um número inteiro B que representa o número de votos brancos, um número N de votos nulos e um número V de votos válidos. O programa deve calcular e escrever o percentual que cada um representa em relação ao total de eleitores, além da porcentagem de ausentes. Formate sua saída conforme exemplos abaixo.
*/

#include <stdio.h>

int main(){
    int eleitores, brancos, nulos, validos, ausentes;

    printf("Insira o número de eleitores dessa cidade:\n");
    scanf("%d", &eleitores);

    printf("Insira o número de votos brancos:\n");
    scanf("%d", &brancos);

    printf("Insira o número de nulos:\n");
    scanf("%d", &nulos);

    printf("Insira o número de válidos: \n");
    scanf("%d", &validos);

    ausentes = eleitores - (brancos + nulos + validos);

    double Porbrancos = (brancos*100)/eleitores;
    double Pornulos = (nulos*100)/eleitores;
    double Porvalidos = (validos*100)/eleitores;
    double Porausentes = (ausentes*100)/eleitores;

    printf("Nulos: %.2f%\n", Pornulos);
    printf("Brancos: %.2f% \n", Porbrancos);
    printf("Válidos: %.2f%  \n", Porvalidos);
    printf("Ausentes: %.2f% \n", Porausentes);
    

}   