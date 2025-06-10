
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 10
#define START 0

void preencherVetor(int*);
void bubbleSort(int*);

void imprimirVetor(int*);

int main() {

    srand(time(NULL));
    int v[TAM];

    preencherVetor(v);
    puts("Vetor desorganizado");
    imprimirVetor(v);
    bubbleSort(v);
    puts("===================");
    puts("Vetor organizado");
    imprimirVetor(v);


  return 0;
}

void bubbleSort(int *v) {
  int i, j, temp, *p_temp = &temp, troca, *p_troca = &troca;

  for (i = 0; i < TAM - 1; i++) {
    *p_troca = 0; // Variável para otimização (verificar se houve trocas na passagem)
    for (j = 0; j < TAM - i - 1; j++) {
      if (*(v+j) > *((v+j)+1)) {
        *p_temp = *(v+j);
        *(v+j) = *((v+j)+1);
        *((v+j)+1) = temp;
        *p_troca = 1; // Indica que houve uma troca
      }
    }
    if (*p_troca == 0) { // Se não houve trocas na passagem, a lista já está ordenada
      break;
    }
  }
}

void preencherVetor(int *pv){

    for(int i = 0; i<TAM ;i++){

        *(pv+i) = START + rand() % MX;
    }

}

void imprimirVetor(int *pv){

    for(int i = 0; i<TAM ;i++){

    printf("%d\n",*(pv+i));
}

}