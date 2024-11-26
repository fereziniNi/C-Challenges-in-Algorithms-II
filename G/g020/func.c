#include "func.h"

int contaPalavra(char* string){
    int count = 0;
    for(int i =0; string[i] != '\0'; i++){
        count++;
    }
    return count;
}