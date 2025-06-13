#include <stdio.h>
void pedirValor(int *);
void imprimirMenorValor(int*,int*);

int main(){

int v0, *p_v0 = &v0,v, *p_v = &v, i = 0;

pedirValor(p_v);

*p_v0=*p_v;

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


