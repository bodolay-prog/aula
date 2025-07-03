#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define QTDVETOR 5
#define MX 10
#define MARGEMERRO 5

typedef struct 
{
    float x;
    float x_;
} vetor;

typedef void (*func)(); ;

void alocarMemoria(vetor**,int);
void imprimirVetores(vetor*,int);
void preencherVetor(vetor*,int,int,int);
void erroMedio(vetor*,int,float*);

int main(){

    vetor *pvetor;
    float resposta, *p_resposta = &resposta;
    srand(time(NULL));

     alocarMemoria(&pvetor,QTDVETOR);
    if(!(pvetor)){

        puts("Erro ao alocar memória.");
        exit(1);

    }

    preencherVetor(pvetor,QTDVETOR,MX,MARGEMERRO);
    imprimirVetores(pvetor,QTDVETOR);
    erroMedio(pvetor,QTDVETOR,p_resposta);
    printf("O valor é %.3f\n", *p_resposta);
    return 0;
}

void alocarMemoria(vetor **v,int qtd){

    *v = malloc(sizeof(vetor)*qtd);

}

void imprimirVetores(vetor *v, int qtd){

    for(int i = 0; i<qtd; i++){

        printf("O vetor %d tem o valor normal %.2f e o valor esperado %.2f\n", i+1, (v+i)->x, (v+i)->x_);

    }

}

void preencherVetor(vetor *v, int qtd, int mx,int erro){

    for(int i = 0; i<qtd; i++){

        (v+i)->x = ((float)rand()/RAND_MAX) * mx;
        (v+i)->x_ = (((float)rand()/RAND_MAX) * mx) + ((float)(1 + rand() % erro)/10) ;

    }

}

void erroMedio(vetor *v ,int qtd,float *r){

    float somatorio = 0;

    for(int i = 0; i<qtd; i++){

        somatorio = somatorio + pow(((v+i)->x_ - (v+i)->x),2);

    }

    *r = (float)somatorio/qtd;

}