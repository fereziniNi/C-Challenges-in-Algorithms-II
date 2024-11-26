/*
    Faça um programa que leia uma série de informações de alunos de uma universidade. São eles: nome completo, sexo, registro acadêmico, data de ingresso e nome do curso. Quando não há mais alunos, o nome informado deve ser "FIM", indicando o fim da leitura. Considere como formato de entrada e saída o exemplo a seguir.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[30];
    char sexo;
    char ra[15];
    char ingresso[11];
    char curso[30];
} Aluno;

int main() {
    int max = 100;
    Aluno lista[max];
    int size = 0;

    while (1) {
        Aluno aluno;

        printf("Nome: ");
        fgets(aluno.nome, sizeof(aluno.nome), stdin);
        aluno.nome[strcspn(aluno.nome, "\n")] = '\0';
        if (strcmp(aluno.nome, "FIM") == 0) {
            break;
        }

        printf("Sexo (F ou M): ");
        scanf(" %c", &aluno.sexo);

        printf("RA: ");
        scanf("%s", aluno.ra);

        printf("Data de ingresso (dd/mm/yyyy): ");
        scanf("%s", aluno.ingresso);

        printf("Curso: ");
        scanf("%s", aluno.curso);

        lista[size] = aluno;
        size++;
        getchar();
    }

    printf("\n===== REGISTROS DOS ALUNOS =====\n");
    for (int i = 0; i < size; i++) {
        printf("Registro %d:\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Sexo: %c\n", lista[i].sexo);
        printf("RA: %s\n", lista[i].ra);
        printf("Ingresso: %s\n", lista[i].ingresso);
        printf("Curso: %s\n", lista[i].curso);
        printf("===============================\n");
    }

    return 0;
}
