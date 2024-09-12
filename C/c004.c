#include <stdio.h>

int main(){
    int a,b, soma = 0;
    printf("Insira o valor de a e b:\n");
    scanf("%d\n%d", &a, &b);

    for(int i = a; i <=b; i++){
        soma += i;
    }

    printf("---\n");
    printf("%d", soma);

    return 0;
}