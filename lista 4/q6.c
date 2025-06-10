#include <stdio.h>
#include <string.h>
#define BUFFER 100

void receberStg(char*);
void copiarString(char*,char*);
void mostrarString(char*);

int main(){

    char stg[BUFFER];
    char stg2[BUFFER];

    receberStg(stg);
    copiarString(stg,stg2);
    mostrarString(stg2);
    
    return 0;
}

void receberStg(char *pstg){

    puts("Digite a string:");
    fgets(pstg,BUFFER,stdin);

    pstg[strcspn(pstg, "\n")] = '\0';

    
    
}

void mostrarString(char *stg){

    printf("A string é: %s\n",stg);
}


void copiarString(char *stg1, char *stg2){

    for(int i = 0;i<BUFFER;i++){

        *(stg2+i) = *(stg1+i);
    }

}