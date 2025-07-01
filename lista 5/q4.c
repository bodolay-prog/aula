#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define START 1
#define END 10

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

        *(p+i) = START +rand() % END;
        printf("O valor não normalizado é %d\n", *(p+i));

    }

    int min = *p;
    int max =min;

    for(int i = 0; i<t; i++){

        if(*(p+i)<min){

            min = *(p+i);

        }

        if(*(p+i)>max){

            max = *(p+i);

        }

    }

   for(int i = 0; i<t; i++){

    *(p+i) = (*(p+i)-min)/(max-min);

   }

   for(int i = 0; i<t; i++){

    printf("O valor normalizado é %d\n", *(p+i));

   }

    return 0;
}