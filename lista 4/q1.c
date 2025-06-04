#include <stdio.h>
#include <stdlib.h>

void pedirValor(int *, int *);
void fazerSoma(int*,int*,int*);

int main(){

    int a, *p_a = &a, b, *p_b = &b, r, *p_r = &r;

    pedirValor(p_a,p_b);
    fazerSoma(p_a,p_b,p_r);


}

void pedirValor(int *pa, int *pb){

    printf("Digite o primeiro valor: ");
    scanf("%d",pa);

    printf("Digite o segundo valor: ");
    scanf("%d",pb);

}

void fazerSoma(int *pa,int *pb, int *pr){

    *pr = *pa + *pb;

}