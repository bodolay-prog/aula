#include <stdio.h>
#include <stdlib.h>

void pedirValor(int *);
void imprimirMenorValor(int*,int*);

int main(int argc, char *argv[]){

if (argc != 2) {
    printf("Use: \n\t\t %s <valor inicial>\n", argv[0]);
    exit(1);
}

int v0, *p_v0 = &v0,v, *p_v = &v, i = 0;

*p_v = atoi(*(argv+1));
*p_v0 = *p_v; // Inicializa o menor valor com o primeiro valor lido

while (i<5){

pedirValor(p_v);
imprimirMenorValor(p_v0,p_v);

i++;
}

    return 0;
}

void pedirValor(int *pa){ 

    printf("Digite um valor: \n");
    scanf("%d",pa);



}

void imprimirMenorValor(int *pv0, int *pv){


    if(*pv<*pv0){
    printf("O menor valor é %d\n",*pv);
    *pv0 = *pv; 
}
else{
    printf("O menor valor é %d\n",*pv0);
    
}
}


