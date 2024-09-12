#include <stdio.h>

int choconta(int n, int c, int m){
    int total = n / c;
    if(total >= m){
        total = (total) + total/m;
    }
    return total;

}

int main(){
    int n,m,c, tt;
    printf("Informe o din no borso: ");
    scanf("%d", &n);
    printf("Informe o preco do ouro: ");
    scanf("%d", &c);
    printf("Informe o desconto: ");
    scanf("%d", &m);

    tt = choconta(n, c, m);
    printf("%d\n", tt);
    

}