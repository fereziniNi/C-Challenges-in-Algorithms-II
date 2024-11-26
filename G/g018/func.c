#include "func.h"

int somaFat(int n){
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += fatorial(i);
    }
    return sum;
}

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}