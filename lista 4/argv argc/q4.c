#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGE 10
#define START 0

void preencherVetor(int*,int);
void imprimirVetor(int*,int qtd);

int main(int argc, char *argv[]){

    if (argc != 2) {
        printf("Use: \n\t\t %s <quantidade de elementos>\n", argv[0]);
        exit(1);
    }

int qtd = atoi(*(argv+1));

if (qtd <= 0) {
        printf("A quantidade de elementos deve ser um número positivo.\n");
        exit(1);
    }

int *p_v=NULL;
    // Alocando memória para o vetor de inteiros
    // O tamanho do vetor é determinado pelo argumento de linha de comando
    p_v = malloc(qtd*sizeof(int));

    if(!p_v){
        puts("Memória não disponível.");
        exit(1);
    }

srand(time(NULL));    
preencherVetor(p_v,qtd);
imprimirVetor(p_v,qtd);

// Liberando a memória alocada
free(p_v);

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