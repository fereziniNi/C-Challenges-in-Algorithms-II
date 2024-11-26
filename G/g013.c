/*
    Faça um programa que leia uma data no formato "dd/mm/aaaa" e escreva no formato textual "dd de MMM de aaaa". Por exemplo, para a entrada "26/08/1914", o programa deve escrever "26 de agosto de 1914". Caso a data seja inválida, seu programa deve escrever "DATA INVALIDA".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int separaData(char* input, int indice, int contador){
    char algo[1];
    int j = 0;
    for(int i = indice; i < contador; i++){
        algo[j] = input[i];
        j++;
    }
    algo[j] = '\0';
    int num = atoi(algo);
    return num;
}

int verificaDia(int dia, int mes){
    if(dia > 31){
        return -1;
    }
    if(dia == 31 & (mes==2 || mes == 4 || mes == 6 || mes == 9 || mes == 11)){
        return -1;
    }
    if(dia > 28 & mes == 2){
        return -1;
    }
}

void defineMes(int mes, char* mesEscrito){
switch (mes) {
        case 1:
            strcpy(mesEscrito, "Janeiro");
            break;
        case 2:
            strcpy(mesEscrito, "Fevereiro");
            break;
        case 3:
            strcpy(mesEscrito, "Março");
            break;
        case 4:
            strcpy(mesEscrito, "Abril");
            break;
        case 5:
            strcpy(mesEscrito, "Maio");
            break;
        case 6:
            strcpy(mesEscrito, "Junho");
            break;
        case 7:
            strcpy(mesEscrito, "Julho");
            break;
        case 8:
            strcpy(mesEscrito, "Agosto");
            break;
        case 9:
            strcpy(mesEscrito, "Setembro");
            break;
        case 10:
            strcpy(mesEscrito, "Outubro");
            break;
        case 11:
            strcpy(mesEscrito, "Novembro");
            break;
        case 12:
            strcpy(mesEscrito, "Dezembro");
            break;
    }
}

int main(){
    int flag = 0;

    char input[10];
    scanf("%s", input);
    int dia = separaData(input, 0, 2);
    int mes = separaData(input, 3, 5);
    int ano = separaData(input, 6, 10);
    flag = verificaDia(dia, mes);
    if(mes > 12){
        flag -=1;
    }
    char mesEscrito[20];
    defineMes(mes, mesEscrito);
    if(flag != 0){
        printf("Mes invalido");
    }else{
        printf("%d de %s de %d", dia, mesEscrito, ano);
    }
    return 0;
}
