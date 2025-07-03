#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define START 1
#define END 10

int main(int argc,char * argv[]){

    srand(time(NULL));
    int *p;
    int *h;
    int cont = 0;
    int s;
    int med;
    int mediana;
    int moda = 0;
      
    p = malloc(sizeof(int)*TAM);
    h = malloc(sizeof(int)*TAM);

    
    for(int i = 0; i<TAM; i++){

        *(p+i) = rand() % END;
        

    }
    
   
    int aux;
    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (p[k]>p[j]){
                aux = p[k];
                p[k] = p[j];
                p[j] = aux;
            }
        }
    } 

    puts("===========Vetor gerado===============");
    for(int i = 0; i<TAM; i++){
        printf("%d ",*(p+i));
        s = s + *(p+i);
        (*(h+*(p+i)))++;
      

    }

    int cheque = *h;
    for(int i = 0; i<TAM; i++){


        
        
        if(*(h+i)>cheque){

            cheque= *(h+i);
            moda = i;

        } 

    }

    med = s/TAM;

    if(!(TAM%2)){

        mediana = (*(p+(TAM/2)) + *(p+((TAM/2) - 1)))/2;

    }
    else{

        mediana = *(p+(TAM/2));

    }

  puts("\n=================Moda=================");
  printf("A moda é : %d\n", moda);
  printf("A média é %d\n", med);
  printf("A mediana é %d\n", mediana);



    return 0;
}