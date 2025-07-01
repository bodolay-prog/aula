#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(int argc,char * argv[]){

    srand(time(NULL));
    int *p;

     if (argc!=2){
        printf("Uso:\n\t %s <tamanhoVetor>\n\n",*argv);
        exit(1);
    }
    
    int t = atoi(*(argv+1));
    p = malloc(sizeof(int)*t);

    for(int i = 0; i<t; i++){

        *(p+i) = rand() % MX;

    }

    int min = *p;

    for(int i = 0; i<t; i++){

        if(*(p+i)<min){

            min = *(p+i);

        }

    }

    printf("O endereço e o menor valor é [%p] - %d\n", &min, min);


    return 0;
}