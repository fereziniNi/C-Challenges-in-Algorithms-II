#include <stdio.h>
int main(){
    int x,y;
    printf("Insira o valor de x e y:\n");
    scanf("%d\n%d", &x, &y);

    if(x > y){
        printf("INVALIDO");
    }
    for(int i = x; i <= y; i++){
        printf("%d\n", i);
    }
    printf("----");
    for(int i = y; i >= x; i--){
        printf("%d\n", i);
    }

    return 1;
}