#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define START 1
#define END 10

int main(int argc,char * argv[]){

    srand(time(NULL));
    int *p;
    int cont = 0;
    int s;
    int med;
    int mediana;
    int moda;
      
    p = malloc(sizeof(int)*TAM);

    for(int i = 0; i<TAM; i++){

        *(p+i) = rand()/RAND_MAX * END;
        printf("O valor %d o é %.d\n", i, *(p+i));

    }

    for(int i = 0; i<TAM; i++){

        s = s + *(p+i);


    }

    return 0;
}