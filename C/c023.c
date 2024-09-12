/*
    Você está responsável pelo bolo de aniversário da sua priminha e decidiu que o bolo terá uma vela para cada ano da idade total dela. Quando ela assopra as velas, ela só é capaz de apagar apenas as velas mais altas. Sua tarefa é fazer um programa que leia a idade A da sua sobrinha e a altura das velas. Após isso, seu programa deve imprimir a quantidade de velas que ela vai conseguir apagar.
Por exemplo, se sua priminha está fazendo 4 anos e o bolo possui 4 velas de tamanhos 4, 4, 1, 3, então ela só vai conseguir apagar as duas mais altas, de tamanho 4. Portanto, a resposta deve ser 2.

*/

#include <stdio.h>

int main(){
    int idade;
    printf("Insira a idade da menina: ");
    scanf("%d", &idade);

    int tam = 0, count = 1;
    for(int i = 0; i < idade; i++){
        int vela;
        printf("Insira o tamanho: ");
        scanf("%d", &vela);

        if(tam == 0){
            tam = vela;
        }else if(vela == tam){
            count++;
        }else if(tam < vela){
            tam = vela;
            count = 1;
        }
    } 


    printf("%d", count);
}