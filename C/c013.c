#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, maior = 0, num, menor = 0, soma = 0;
    printf("Insira a quantidade:  ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nInsira o num: ");
        scanf("%d", &num);
        if (maior == 0){
            maior = num;
            menor = num;
        }else if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
        soma += num;
    }


    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("tt: %d\n", soma);

    return 1;
}