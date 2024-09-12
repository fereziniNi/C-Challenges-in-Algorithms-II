#include <stdio.h>

int main(){
    int pares = 0, impares = 0, total = 0, n;

    printf("Informe o número: ");
    scanf("%d", &n);
    while (n != 0){
        if(n%2==0){
            pares += n;
        }else{
            impares += n;
        }
        total += n;

        printf("\nInforme outro número novamente: ");
        scanf("%d", &n);
    }
    
    printf("%d", pares);
    printf("\n%d", impares);
    printf("\n%d\n", total);

}