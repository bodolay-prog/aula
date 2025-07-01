#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define START 1
#define END 10

int main(int argc,char * argv[]){

    srand(time(NULL));
    float *p;

     if (argc!=2){
        printf("Uso:\n\t %s <tamanhoVetor>\n\n",*argv);
        exit(1);
    }
    
    float t = atoi(*(argv+1));
    p = malloc(sizeof(float)*t);

    for(int i = 0; i<t; i++){

        *(p+i) = (float)rand()/RAND_MAX * END;
        printf("O valor %d o é %.2f\n", i, *(p+i));

    }

    float s;
    for(int i = 0; i<t; i++){

        s = s + *(p+i);

    }

    printf("O resultado da soma é %.2f\n",s);
    return 0;
}