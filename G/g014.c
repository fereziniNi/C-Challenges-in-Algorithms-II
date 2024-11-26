/*
    Faça um programa que leia um número inteiro N. Após isso leia N datas no formato "dd/mm/aaaa". Seu programa deve escrever todas as datas no formato textual "dd de MMM de aaaa". Caso a data seja inválida, seu programa deve escrever "DATA INVALIDA". 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para separar partes da data
int separaData(char *input, int inicio, int fim) {
    char algo[5]; // Espaço suficiente para números de até 4 dígitos
    int j = 0;
    for (int i = inicio; i < fim; i++) {
        algo[j] = input[i];
        j++;
    }
    algo[j] = '\0';
    return atoi(algo);
}

int verificaData(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12) {
        return -1;
    }
    if (dia < 1 || dia > 31) {
        return -1;
    }
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        return -1;
    }
    if (mes == 2) {
        int bissexto = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));
        if (dia > (bissexto ? 29 : 28)) {
            return -1;
        }
    }
    return 0;
}

void defineMes(int mes, char *mesEscrito) {
    switch (mes) {
        case 1: strcpy(mesEscrito, "Janeiro"); break;
        case 2: strcpy(mesEscrito, "Fevereiro"); break;
        case 3: strcpy(mesEscrito, "Março"); break;
        case 4: strcpy(mesEscrito, "Abril"); break;
        case 5: strcpy(mesEscrito, "Maio"); break;
        case 6: strcpy(mesEscrito, "Junho"); break;
        case 7: strcpy(mesEscrito, "Julho"); break;
        case 8: strcpy(mesEscrito, "Agosto"); break;
        case 9: strcpy(mesEscrito, "Setembro"); break;
        case 10: strcpy(mesEscrito, "Outubro"); break;
        case 11: strcpy(mesEscrito, "Novembro"); break;
        case 12: strcpy(mesEscrito, "Dezembro"); break;
    }
}

int main() {
    int n;
    printf("Digite o número de datas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char input[11];
        printf("Digite a data (dd/mm/aaaa): ");
        scanf("%s", input);

        int dia = separaData(input, 0, 2);
        int mes = separaData(input, 3, 5);
        int ano = separaData(input, 6, 10);

        if (verificaData(dia, mes, ano) != 0) {
            printf("DATA INVALIDA\n");
        } else {
            char mesEscrito[20];
            defineMes(mes, mesEscrito);
            printf("%d de %s de %d\n", dia, mesEscrito, ano);
        }
    }

    return 0;
}
