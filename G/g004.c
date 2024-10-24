/*
    Faça um programa que leia um valor inteiro N. Após isso, leia N valores inteiros colocando-os em um vetor A de tamanho N. Em seguida, leia um valor inteiro M. Então, leia M valores inteiros colocando-os em um vetor B de tamanho M.
    O programa deve criar um vetor C com os elementos de A e B intercalados, sendo que o primeiro elemento do vetor C deve vir do vetor de maior tamanho (se forem iguais, deve-se começar com o primeiro elemento do vetor A). Ao final, escreve o vetor resultante.
*/

#include <stdio.h>

void fazlista(int vetc[], int lena, int veta[], int vetb[], int lenb){
    int count = 0;
    int i, j;
    for(i = 0, j = 0; i < lena && j < lenb; i++, j++){
        if(lena > lenb){
            vetc[count++] = veta[i];
            vetc[count++] = vetb[j];
        }else{
            vetc[count++] = vetb[j];
            vetc[count++] = veta[i];
        }
    }

    for (i = i; i < lena; i++) {
        vetc[count++] = veta[i];
    }
    for (j = j; j < lenb; j++) {
        vetc[count++] = vetb[j];
    }
}

int main(){
    int lena;
    printf("tamanho a: ");
    scanf("%d", &lena);
    int veta[lena];
    for(int i = 0; i < lena; i++){
        printf("insira o elemento: ");
        int elem;
        scanf("%d", &elem);
        veta[i] = elem;
    }

    int lenb;
    printf("tamanho b: ");
    scanf("%d", &lenb);
    int vetb[lenb];
    for(int i = 0; i < lenb; i++){
        printf("insira o elemento: ");
        int elem;
        scanf("%d", &elem);
        vetb[i] = elem;
    }

    int vetc[lena + lenb];
    fazlista(vetc, lena, veta, vetb, lenb);

    printf("\n");
    printf("\n");
    for (int i = 0; i < lena + lenb; i++) {
        printf("%d ", vetc[i]);
    }
    printf("\n");
    return 1;
}