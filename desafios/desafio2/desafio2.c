#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

#define MX 256
#define INI 0

#define N 5
#define M 5

int main(){

    srand(time(NULL));
    unsigned char *m=NULL;
    unsigned char *mc=NULL;
    unsigned char *mlbp=NULL;
    
    m = malloc(N*M*sizeof(unsigned char));
    mc = malloc((N+2)*(M+2)*sizeof(unsigned char));
    mlbp = malloc(N*M*sizeof(unsigned char));

    preencherMatriz(m,N,M);
    puts("=====Matriz Normal======");
    imprimirMatriz(m,N,M);
    puts("=====Matriz Calculo=====");
    preencherMatriz_Cal(mc,m,N,M);
    gerarMatrizLBP(mc,mlbp,N,M);
    puts("=======Matriz LBP=======");
    imprimirMatriz(mlbp,N,M);
    return 0;
}

