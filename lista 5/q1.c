#include <stdio.h>
#include <stdlib.h>

#define QTD_OPERACOES 3

void somar(int, int);
void multiplicar(int, int);
void dividir(int, int);
void subtrair(int, int);

int main(int argc, char *argv[]){
    void (*pFunc[])(int , int)= {somar, multiplicar, dividir};
    if (argc!=4){
        printf("Uso:\n\t %s<valor1> <valor2> <operação>\n\n",*argv);
        exit(1);
    }
    int n1 = atoi(*(argv+1));
    int n2 = atoi(*(argv+2));
    int codigoOperacao = atoi(*(argv+3));
    if ( (codigoOperacao < 0) || (codigoOperacao >= QTD_OPERACOES)){
        puts("Operacao nao implementada");
        exit(2);
    }

    (*pFunc[codigoOperacao])(n1,n2);
    
    return 0;
}

void somar(int x, int y){
    printf("Resultado: %d\n",x+y);
}

void subtrair(int x, int y){
    printf("Resultado: %d\n",x-y);
}

void multiplicar(int x, int y){
    printf("Resultado: %d\n",x*y);
}

void dividir(int x, int y){
    printf("Resultado: %.2f\n",((float) x)/y);
}