#include <stdio.h>
#include <string.h>
#define BUFFER 100
#define BUFFERJUNTO 200

void receberStg(char*);
void mostrarString(char*);
void juntarString(char*,char*,char*);

int main(){

    char stg[BUFFER];
    char stg2[BUFFER];
    char stgconta[BUFFERJUNTO];

    receberStg(stg);
    receberStg(stg2);
    juntarString(stg,stg2,stgconta);
    mostrarString(stgconta);
    
    return 0;
}

void receberStg(char *pstg){

    puts("Digite a string:");
    fgets(pstg,BUFFER,stdin);

    pstg[strcspn(pstg, "\n")] = '\0';

    
    
}

void mostrarString(char *stg){

    printf("As strings juntas são: %s\n",stg);
}

void juntarString(char *stg,char *stg2, char *stgjunt){

    int tam = 0;

    for(int i = 0;*(stg+i)!='\0';i++){

        *(stgjunt+i) = *(stg+i);
        tam++;

    }

    for(int i = 0;*(stg2+i) != '\0';i++){

        *((stgjunt+tam)+i) = *(stg2 + i);
    }

}