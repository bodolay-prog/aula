#include <stdio.h>

void pedirValor(int *, int *);
void trocarValor(int*,int*);
void imprimir2Valores(int*,int*);

int main(){

    int v1, *p_v1=&v1, v2, *p_v2 = &v2;

    pedirValor(p_v1,p_v2);
    puts("valor Antes da troca:");
    imprimir2Valores(p_v1,p_v2);
    trocarValor(p_v1,p_v2);
    puts("Depois da troca:");
    imprimir2Valores(p_v1,p_v2);

}

void pedirValor(int *pa, int *pb){

    printf("Digite o primeiro valor: ");
    scanf("%d",pa);

    printf("Digite o segundo valor: ");
    scanf("%d",pb);

}

void trocarValor(int *pa, int *pb){

    int temp, *p_temp = &temp;
    temp = *pa;
    *pa = *pb;
    *pb = *p_temp;

}

void imprimir2Valores(int *pa, int *pb){

    printf("Os valores são %d e %d\n",*pa,*pb);
}