#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1,b = 1,n, tt;
    printf("Insira o N: ");
    scanf("%d", &n);

    for(int i = 0; i <n; i++){
        printf("%d\n", a);
        tt = a + b;
        a = b;
        b = tt;
    }

    printf("total: %d\n", tt);
}