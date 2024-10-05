#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[10];
    char name[128];
    float* grades; // vetor de notas - armazena 4 notas - deve ser alocado dinamicamente
} T_STUDENT;


typedef struct {
    int max; // quantidade alocada na 'lista'
    int size; // quantidade de alunos inseridos na 'lista'
    T_STUDENT** students; // vetor de ponteiros para T_STUDENT.
} T_STUDENT_LIST;

int freeAluno(T_STUDENT* students){
    free(students->grades);
    free(students);
}

int freeLista(T_STUDENT_LIST* listaAlunos){
    for(int i = 0; i < listaAlunos->size; i++){
        freeAluno(listaAlunos->students[i]);
    }
    free(listaAlunos->students);
    free(listaAlunos);
}


T_STUDENT* criaAluno(char* id, char* name, float* notas){
    T_STUDENT* aluno;
    aluno = malloc(sizeof(T_STUDENT));
    strcpy(aluno->id, id);
    strcpy(aluno->name, name);
    aluno->grades = malloc(4 * sizeof(float));
    for(int i = 0; i < 4; i++){
        aluno->grades[i] = notas[i];
    }
    return aluno;
}

T_STUDENT_LIST* add(T_STUDENT_LIST* listaAlunos, T_STUDENT* aluno){
    int size = listaAlunos->size;
    listaAlunos->students[size] = aluno;
    listaAlunos->size++; 
}

void buffer(){
    char c = 'a';
    while(c!='\n'){
        c = getchar();
    }
}

T_STUDENT_LIST* criaListaAluno(int max){
    T_STUDENT_LIST* listaAlunos;
    listaAlunos = malloc(sizeof(T_STUDENT_LIST));
    listaAlunos->max = max;
    listaAlunos->size = 0;
    listaAlunos->students = malloc(sizeof(T_STUDENT**)* max);
    return listaAlunos;
}

int isEmpty(T_STUDENT_LIST* listaAlunos){
        if(listaAlunos->size == 0){
        return 1;
    }
    return 0;
}

int isFull(T_STUDENT_LIST* listaAlunos){
    if(listaAlunos->max > listaAlunos->size){
        return 1;
    }
    return 0;
}

int verificaAluno(T_STUDENT_LIST* listaAlunos, char* id){
    for(int i = 0; i < listaAlunos->size; i++){
        if(strcmp(listaAlunos->students[i]->id, id) == 0){
            return 1;
        }
    }
    return 0;
}

void writeAluno(T_STUDENT_LIST* listaAlunos, char* id){
    printf("|%f|", listaAlunos->students[0]->grades[0]);
    for(int i = 0; i < listaAlunos->size; i++){
        if(strcmp(listaAlunos->students[i]->id, id) == 0){
            printf("ID: %s\n", id);
            printf("NOME: %s\n", listaAlunos->students[i]->name);
            for(int j = 0; j < 4; j++){
                printf("nota %d: %.2f\n", j+1, listaAlunos->students[i]->grades[j]);
            }
            printf("---------\n");
        }
    }
}

void apaga(T_STUDENT_LIST* listaAlunos, char* id){
    int indice;
    for(int i = 0; i < listaAlunos->size; i++){
        if(strcmp(listaAlunos->students[i]->id, id) == 0){
            indice = i;
        }
    }

    for(int j = indice; j < listaAlunos->size; j++){
        listaAlunos->students[j] = listaAlunos->students[j + 1];
    }
    listaAlunos->size--;
}

int main(){
    printf("Determine o tamanho da sala: ");
    int maxAlunos;
    scanf("%d", &maxAlunos);
    T_STUDENT_LIST* listaAlunos = criaListaAluno(maxAlunos);
    printf("\n(LISTA CRIADA)\n");

    int opt = 0;

    while(opt != 5){
    printf("\nMENU\n1.cad aluno\n2.search aluno\n3.remove\n4.list all\n5.exit\nOption: ");
    scanf("%d", &opt);
    buffer();

    if(opt == 1){
        int full = isFull(listaAlunos); 
        if(full){
            printf("digite o id do aluno: ");
            char id[10];
            scanf("%s", id);

            int var = verificaAluno(listaAlunos, id);
            printf(var == 1 ? "usuario ja existente" : "Insira o nome: ");
            buffer();
            char nome[128];
            fgets(nome, sizeof(nome), stdin);
            nome[strlen(nome) - 1] = '\0';
            float boletim[4];
            for(int i = 0; i < 4; i++){
                float nota;
                printf("insira a nota %d: ", i + 1);
                scanf("%f", &nota);
                boletim[i] = nota;
            }
            T_STUDENT* aluno = criaAluno(id, nome, boletim);
            add(listaAlunos, aluno);
            buffer();

        }else{
            printf("\nimpossivel, lista cheia :(\n");
        }
    }else if(opt == 2){
        if(isEmpty){
            printf("digite o id do aluno: ");
            char id[10];
            scanf("%s", id);
            int var = verificaAluno(listaAlunos, id);
            if(var == 1){
                printf("-- ALUNO --\n");
                writeAluno(listaAlunos, id);
            }else{
                printf("usuario nao encontrado.");
            }


        }else{
            printf(":( lista vazia.");
        }
    } else if (opt == 3){
            if(isEmpty){
            printf("digite o id do aluno: ");
            char id[10];
            scanf("%s", id);
            int var = verificaAluno(listaAlunos, id);
            if(var == 1){
                apaga(listaAlunos, id);
            }else{
                printf("usuario nao encontrado.");
            }

        }else{
            printf(":( lista vazia.");
        }
    }else if(opt == 4){
        for(int i = 0; i < listaAlunos->size; i++){
            printf("\n---- ALUNO ----\n");
            printf("ID: %s\n", listaAlunos->students[i]->id);
            printf("NOME: %s\n", listaAlunos->students[i]->name);
            for(int j = 0; j < 4; j++){
                printf("nota %d: %f\n", j+1, listaAlunos->students[i]->grades[j]);
            }
            printf("---------\n");
        }
    }
    

    }

    freeLista(listaAlunos);
    return 1;
}