#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 256
#define INI 0

#define N 5
#define M 5
#define MLPBTAM 9

void preencherMatriz(unsigned char*,int,int);
void compararPixels(unsigned char*,unsigned char*,int,int);
void imprimirMatriz(unsigned char*,int,int);

int main(){
    srand(time(NULL));
    unsigned char *m=NULL;
    unsigned char *mlbp=NULL;
    
    m = malloc(N*M*sizeof(unsigned char));
    mlbp = malloc(9*sizeof(unsigned char));

    preencherMatriz(m,N,M);
    imprimirMatriz(m,N,M);

    return 0;
}

void preencherMatriz(unsigned char *v ,int n,int m){


    for(int k = 0; k<n*m; k++){

        *(v+k) = INI + rand() % MX;

    }

}

void compararPixels(unsigned char *v ,unsigned char *vr,int n,int m){

    unsigned char lbp[3][3] = {0};
    unsigned char center = 0;

    for(int k = 0; k<4;k++){

        if(!(k)){

            for(int j = 0; j<9 ; j++){

                

            }
            
            

        }



      

    }


}

void imprimirMatriz(unsigned char *mr,int n ,int m){

    for(int k = 0; k<n*m; k++){

        if(k%m == 0 && k != 0){

            puts("");

        }
        printf("%3u ",*(mr+k));


    }
    puts("");
}