#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b){
    while(b != 0){
        int resto;
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
}

int main(){
    int a, b;
    printf("Insira o A: ");
    scanf("%d", &a);
    printf("Insira o B: ");
    scanf("%d", &b);

    printf("%d\n", mdc(a, b));

    return 1;
}