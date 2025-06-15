#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define START 0

void preencherVetor(int*,int);
void imprimirVetor_reto(int*,int);
void preencherHisto_matriz(int*,int*,int*,int);
void imprimirMatriz(int*,int);

int main(){

    srand(time(NULL));

    unsigned x[N];
    unsigned y[N];
    int m[N*N]={0};

    preencherVetor(x,N);
    preencherVetor(y,N);
    puts("Vetor X:");
    puts("====================");
    imprimirVetor_reto(x,N);
    puts("====================");
    puts("Vetor Y:");
    puts("====================");
    imprimirVetor_reto(y,N);
    puts("====================");
    preencherHisto_matriz(m,x,y,N);
    puts("Matriz Histrograma:");
    imprimirMatriz(m,N);
    puts("====================");
    



    return 0;
}

void preencherVetor(int *v,int q){
    for(int i = 0; i < q; i++){
        v[i] = START + rand() % q;
    }
}

void imprimirVetor_reto(int *v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]+1); // mais 1, pois o que o programa entende vem como como o valor - 1 vindo com + 1 fica exatamente como se le
    }
    printf("\n");
}

void preencherHisto_matriz(int *v,int *v2,int *v3,int qtd){


    for(int i = 0;i<qtd;i++){
         

        (*(v+(*(v2 + i)) * N + (*(v3 + i))))++;
       

       
    }
}

void imprimirMatriz(int *v,int qtd){

    for(int i = 0;i<qtd*qtd;i++){

        if(!(i%N)&&i!=0){

            puts("");

        }
        printf("%d ",*(v+i));
        

    }   
    puts("");
}