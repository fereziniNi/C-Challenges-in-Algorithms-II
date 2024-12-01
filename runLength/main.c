#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clean_buffer(FILE* file) {
    while(fgetc(file) != '\n'){}
}

void descompacta(FILE *file, FILE *new){
    char linha[128];
    while(fgets(linha, sizeof(linha), file) != NULL) {
        for(int i = 0; i < strlen(linha) - 1; i++) { 
            if(linha[i] != ' ' && linha[i] != '@') {
                int j = 0;
                char num[3];
                num[j++] = linha[i];
                if(linha[i+1] != ' '){
                    num[j++] = linha[i++];
                }
                num[j] = '\0';
                fprintf(new, "%s ", num);
            }else if(linha[i] == '@'){
                i+=2;
                char elem[3];
                elem[0] = linha[i];
                if(linha[i+1] != ' '){
                    elem[1] = linha[++i];
                    elem[2] = '\0';
                }else{
                    elem[1]= '\0';
                }
                i+=2;
                char qtde[3];
                qtde[0] = linha[i];
                if(linha[i+1] != ' '){
                    qtde[1] = linha[++i];
                    qtde[2] = '\0';
                }else{
                    qtde[1]= '\0';
                } 
                int qtde_int = atoi(qtde);
                for(int cont = 0; cont < qtde_int; cont++){
                   fprintf(new, "%s ", elem);
                }
            }   
        }
    fprintf(new, "\n");
    }
}

void compactar(FILE *file, FILE *new) {
    char linha[128];
    while (fgets(linha, sizeof(linha), file) != NULL) {
        for (int i = 0; i < strlen(linha); i++) {
            if (linha[i] == ' ' || linha[i] == '\n') {
                // Ignora espaços e quebras de linha sem usar `continue`
            } else {
                char elem[3];
                elem[0] = linha[i];
                if (linha[i + 1] != ' ' && linha[i + 1] != '\n') {
                    elem[1] = linha[++i];
                    elem[2] = '\0';
                } else {
                    elem[1] = '\0';
                }

                int count = 1;
                int j = i + 2;
                while (j < strlen(linha) && linha[j] == elem[0]) {
                    count++;
                      if (elem[1] == '\0') {
                            j += 2;
                        } else {
                            j += 3;
                        }
                }

                if (count > 3) {
                    fprintf(new, "@ %s %d ", elem, count);
                } else {
                    for (int k = 0; k < count; k++) {
                        fprintf(new, "%s ", elem);
                    }
                }

                i = j - 2;
            }
        }
        fprintf(new, "\n");
    }
}


void cabecalho(FILE* file, FILE* new){
    char modo[3];
    fscanf(file, "%s", modo);
    if(strcmp(modo, "P8") == 0){
        new = fopen("saida.pgm", "w");
        fprintf(new, "P2\n");
    } else {
        new = fopen("saida.pgmc", "w");
        fprintf(new, "P8\n");
    }

    int x, y, intensidade;
    fscanf(file, "%d %d %d", &x, &y, &intensidade);
    fprintf(new, "%d %d\n%d", x, y, intensidade);

    if(strcmp(modo, "P8")== 0){
        descompacta(file, new);
    }else{
        compactar(file, new);
    }

}

int main(){
    // Entrada!
    char entrada[20] = "exemplo1.pgm";

    FILE *file;
    FILE *new;

    file = fopen(entrada, "r");
    if(file == NULL){
        printf("Erro! Arquivo nao existe!");
        return 1;
    }

    cabecalho(file, new);

    fclose(file);
    fclose(new);

    return 0;
}
