#include <stdio.h>

int main(){
    printf("Insira o N: ");
    int n, resultado = 1;
    scanf("%d", &n);

    for(int i = n; i > 1; i--){
        resultado *=i;
    }

    printf("%d", resultado);
}