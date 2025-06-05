#include <stdio.h>
#include <string.h>
#define BUFFER 100

void receberStg(char*,int);
void pegaremostrarTam(char*,int*);

int main(){

char stg[BUFFER];
int tam, *p_tam = &tam;

receberStg(stg,BUFFER);
pegaremostrarTam(stg,p_tam);

    return 0;
}

void receberStg(char *pstg, int buff){

    puts("Digite a string:");
    fgets(pstg,buff,stdin);

    pstg[strcspn(pstg, "\n")] = '\0';

}

void pegaremostrarTam(char *pstg, int *tam){

     *tam = strlen(pstg);
    printf("O tamanho da stg é %d\n", *tam);
}