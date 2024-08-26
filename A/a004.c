/*
    Faça um programa que leia o nome de um(a) aluno(a). Após isso, o programa deve ler duas notas de provas. O programa deve calcular da média simples delas e escrever a saída conforme modelo abaixo. A média deve ser escrita com duas casas decimais.
*/
#include <stdio.h>

int main(){
    char aluno[20];
    float a,b,media;
    printf("Escreva o nome do Aluno:\n");
    scanf("%s", aluno);
    printf("Insira a seguir as notas:\n");
    scanf("%f %f", &a, &b);
    media = (a+b)/2;
    
    printf("Aluno %s: %.2f\n", aluno,media);
    
    return 1;
}