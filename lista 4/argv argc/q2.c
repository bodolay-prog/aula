#include <stdio.h>
#include <stdlib.h>

void pedirValor(int *, int *);
void trocarValor(int*,int*);
void imprimir2Valores(int*,int*);

int main(int argc, char *argv[]){

    int v1, *p_v1=&v1, v2, *p_v2 = &v2;

    if (argc != 3) {
        printf("Use: \n\t\t %s <valor de v1> <valor de v2>\n", argv[0]);
        exit(1);
    }
    *p_v1 = atoi(*(argv+1));
    *p_v2 = atoi(*(argv+2));
    puts("valor Antes da troca:");
    imprimir2Valores(p_v1,p_v2);
    trocarValor(p_v1,p_v2);
    puts("Depois da troca:");
    imprimir2Valores(p_v1,p_v2);


    return 0;
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