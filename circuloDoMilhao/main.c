#include <stdio.h>
#include <stdlib.h>

int criaLista(int listaPessoas[], int qtde){
    for(int i = 0; i < qtde; i++){
        listaPessoas[i] = i+1;
    }

    return 1;
}

int elimina(int listaPessoas[], int *n, int next, int eliminados[],int qtdeE){
    int num = listaPessoas[next];
    eliminados[qtdeE] = num;

    for(int i = next; i < *n; i++){
        listaPessoas[i] = listaPessoas[i+1];
    }
    (*n)--;
    return 1;
}

int main(){
    
    printf("ENESIMO: ");
    int x;
    scanf("%d", &x);
    int n;
    printf("QUANTIDADE: ");
    scanf("%d", &n);

    int *listaPessoas = malloc(n*sizeof(int));
    criaLista(listaPessoas, n);
    int *eliminados = malloc(999 *sizeof(int));
    int qtdeE = 0;

    int next = 1;
    while(n > 1){
        elimina(listaPessoas, &n, next, eliminados, qtdeE);
        if(next+1 > n){
            next = 1;
        }else if(next+1 == n){
            next = 0;
        }else{
            next +=1;
        }
        qtdeE+=1;
    }


    printf("campeao: %d\n", listaPessoas[0]);
    printf("eliminado: %d\n", eliminados[x-1]);
    
    return 1;
}