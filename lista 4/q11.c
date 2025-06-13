#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define TAM 15
#define START 0

void preencherVetor(int*);
void imprimirVetor(int*,int);
void imprimirVetor(int*,int);


int main(){

    int x[TAM];
    int y[TAM];

    preencherVetor(x);
    preencherVetor(y);

    puts("Vetor X:");
    imprimirVetor_reto(x,TAM);
    puts("Vetor Y:");
    imprimirVetor_reto(y,TAM);
    puts("Matriz Histrograma:");

    



    return 0;
}

void preencherVetor(int *v){
    for(int i = 0; i < N; i++){
        v[i] = rand() % TAM + START;
    }
}

void imprimirVetor(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprimirVetor_reto(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}
