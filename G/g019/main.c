#include <stdio.h>
#include "func.h"

int main(){
    int n;
    printf("len: ");
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        vet[i] = num;
    }

    printf("x: ");
    int x;
    scanf("%d", &x);

    int indice  = search(vet, n, x);
    printf("%d", indice);

}