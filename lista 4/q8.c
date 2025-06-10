#include <stdio.h>
#include <string.h>
#define BUFFER 100

void receberStg(char*);
void receberChar(char*);
void acharChar(char*,char*);

int main(){

    char stg[BUFFER];
    char procu, *p_procu = &procu;

    receberStg(stg);
    receberChar(p_procu);
    acharChar(stg,p_procu);


    return 0;
}

void receberStg(char *pstg){

    puts("Digite a string:");
    fgets(pstg,BUFFER,stdin);

    pstg[strcspn(pstg, "\n")] = '\0';

    
    
}

void receberChar(char *ch){

    puts("Digite o caractere para ser encontrado na string:");
    *ch = getchar();

}

void acharChar(char *stg, char *ch){

    int cha =0;
    for(int i = 0;*(stg+i) != '\0';i++){

        if((*(stg+i) == *ch)){
            cha++;
        }
        

    }

    if(cha){
            puts("A string tem esse caractere");
        
        }
        else{
            puts("A string não tem esse caractere");
        }

}