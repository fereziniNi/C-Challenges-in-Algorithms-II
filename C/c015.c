#include <stdio.h>

int main(){
    int n, resposta = 0;
    printf("Insira o N: ");
    scanf("%d", &n);

    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count <= 2){
        resposta = 1;
    }
    printf("%d\n", resposta);
    return 1;
}