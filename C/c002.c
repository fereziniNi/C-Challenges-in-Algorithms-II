#include <stdio.h>
int main(){
    int x,y;
    printf("INsira o valor de x e y:\n");
    scanf("%d\n%d", &x, &y);

    if(x > y){
        printf("INVALIDO");
    }
    for(int i = x; i <= y; i++){
        printf("%d\n", i);
    }

    return 1;
}