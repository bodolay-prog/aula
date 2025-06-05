#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 10
#define START 0

void preencherVetor(int*,int);
void imprimirVetor(int*,int qtd);

int main(){


int *p_v=NULL;
int qtd;

puts("Digite a quantidade de valores do vetor: ");
scanf("%d",&qtd);

    p_v = malloc(qtd*sizeof(int));

    if(!p_v){
        puts("Memória não dispovível.");
        exit(1);
    }

srand(time(NULL));    
preencherVetor(p_v,qtd);
imprimirVetor(p_v,qtd);

    return 0;
}

void preencherVetor(int *pv, int qtd){

    for(int i = 0; i<qtd ;i++){

        *(pv+i) = START + rand() % RANGE;
    }

}

void imprimirVetor(int *pv, int qtd){

    for(int i = 0; i<qtd ;i++){

    printf("[%p] - %d\n", (pv+i),*(pv+i));
}

}