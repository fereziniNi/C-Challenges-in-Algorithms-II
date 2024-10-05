#include <stdio.h>
#include <stdlib.h>

int soma(int vet[], int max){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        int primeiro = vet[i];
        int segundo = vet[i+1];
        if(primeiro == 10){
            sum += primeiro + segundo + vet[i+2];
            i -= 1;
        }else if(primeiro + segundo == 10 && primeiro != 10){
            sum += primeiro + segundo + vet[i+2];
        }else{
            sum += primeiro + segundo;
        }
        i+=1;
    }
    return sum;
}

void printLista(int vet[], int max){
    for(int i = 0; i < max; i++){
        printf("| ");
         if(max - i == 1){
            printf("%d", vet[max-1]);
        }else{
        int primeiro = vet[i];
        int segundo = vet[i+1];
        if(primeiro + segundo == 10 && primeiro != 10){
            printf("%d /", primeiro);
        }else if(primeiro == 10){
            printf("X _");
            i -= 1;
        }else{
            printf("%d %d", primeiro, segundo);
        }
        }
        printf(" | ");
        i +=1;
    }
}

int main(){
    int* vet;
    vet = (int*)malloc(sizeof(int)* 21);
    int jogadas = 10;
    int contador = 0;
    int x = 0;

    while(contador < jogadas + 1 ){
        int bola;
        scanf("%d", &bola);
        int bola2;
        scanf("%d", &bola2);
        if(bola == 10 || bola2 == 10){
            vet[x] = bola;
            x +=1;
            contador += 1;
            vet[x] = bola2;
        }else{
            vet[x] = bola;
            x+=1;
            vet[x] = bola2;
        }
        

        if(contador == 10){
            if(vet[x-1] + vet[x-2] == 10){
                int bola;
                scanf("%d", &bola);
                x+=1;
                vet[x] = bola;
                contador+=1;
                jogadas +=1;
            }
            }else if(vet[x-1] == 10){
                vet[x] = bola;
                x +=1;
                vet[x] = bola2;
                contador += 1;
                jogadas +=1;
            }
        x += 1;
        contador+=1;
    }
    printf("\n");
    
    printLista(vet, x);
    printf("\n");
    
    int total = soma(vet, x);
    printf("\nsoma: %d\n", total);

    free(vet);
    return 1;
}

/*
            if(contador == jogadas){
            if(vet[x] == 10){
                printf("\n||%d||\n", x-1);
                if(bola == 10){
                    vet[x] = bola;
                }else{
                    vet[x] = bola;    
                    x +=1;
                    vet[x] = bola2;
                }
            }else{
                vet[x] = bola;
            }
        contador+=1;
        }
*/