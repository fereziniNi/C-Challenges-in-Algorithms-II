#include "func.h"

int search(int* vet, int num, int x){
    for(int i = 0; i < num; i++){
        if(x == vet[i]){
            return i;
        }
    }
    return -1;
}