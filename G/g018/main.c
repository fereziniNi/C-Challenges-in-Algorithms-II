#include <stdio.h>
#include "func.h"

int main(){
    printf("insira o n: ");
    int n;
    scanf("%d", &n);

    int result = somaFat(n);

    printf("\n%d\n\n", result);

    return 0;
}