#include <stdio.h>
int main(){
    int n;
    printf("Insira um numero:\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d\n    ", i);   
    }

    printf("----");

}