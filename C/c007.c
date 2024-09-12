#include <stdio.h>

int main(){
    printf("Insira sua base e seu expoente: ");
    
    int base, expo, resultado  = 1;
    scanf("%d %d", &base, &expo);
    for(int i = 0; i < expo; i++){
        resultado *= base;
    }

    printf("%d", resultado);
}