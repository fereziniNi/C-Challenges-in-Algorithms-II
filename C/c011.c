#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, n, count = 0;
    printf("Insira o número para a verificação: ");
    scanf("%d", &x);

    printf("Digite um num: ");
    scanf("%d", &n);

    while(n > 0){
        if(n == x){
            count++;
        }
        printf("Digite um num: ");
        scanf("%d", &n);
    }

    printf("contador: %d\n", count);
}