#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, maior = 0, num;
    printf("Insira a quantidade:  ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nInsira o num: ");
        scanf("%d", &num);
        if (maior == 0){
            maior = num;
        }
        if(num > maior){
            maior = num;
        }
    }

    printf("num: %d\n", maior);

    return 1;
}