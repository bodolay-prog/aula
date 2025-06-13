#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define TAM 15
#define START 0

void preencherVetor(int*);
void imprimirVetor(int*,int);
void preencherHisto(int*,int*,int);

int main(){

    srand(time(NULL));

    int x[TAM]={0};
    int f[N] = {0};
    preencherVetor(x);
    puts("Vetor gerado:");
    imprimirVetor(x,TAM);
    puts("=============");
    puts("Vetor Histograma");
    preencherHisto(x,f,TAM);
    imprimirVetor(f,N);




}

void preencherVetor(int *pv){

    for(int i = 0; i<TAM ;i++){

        *(pv+i) = START + rand() % N;
    }

}

void imprimirVetor(int *pv, int qtd){

    for(int i = 0; i<qtd ;i++){

    printf("%d\n",*(pv+i));
}

}

void preencherHisto(int *v,int *v2,int qtd){

    for(int i = 0;i<qtd;i++){

        (*(v2+*(v+i)))++;
        
    }
}