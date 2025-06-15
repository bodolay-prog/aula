#include <stdio.h>
#include <stdlib.h>

void pedirValor(int *, int *);
void fazerSoma_MostrarValor(int*,int*,int*);

int main(int argc, char *argv[]){

    if (argc!=3){
        printf("Use: \n\t\t %s <valor de a> <valor de b>",argv[0]);
        exit(1);
    }

    int a, *p_a = &a, b, *p_b = &b, r, *p_r = &r;


    *p_a = atoi(*(argv+1));
    *p_b = atoi(*(argv+2));
    fazerSoma_MostrarValor(p_a,p_b,p_r);

    return 0;
}

void fazerSoma_MostrarValor(int *pa,int *pb, int *pr){

    *pr = *pa + *pb;
    printf("O valor é %d e o endereço é [%p]\n",*pr,pr);

}