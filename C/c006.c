#include <stdio.h>

int main(){
    printf("Insira um número harmonico: ");
    double n, h = 0.0;
    scanf("%lf", &n);
    for(int i = 1; i <= n; i++){
        h += 1.0/i;
    }

    printf("\nHarmonico: %.4f", h);
}
