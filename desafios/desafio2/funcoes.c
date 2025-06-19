#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"

void preencherMatriz(unsigned char *v ,int n,int m){


    for(int k = 0; k<n*m; k++){

        *(v+k) = INI + rand() % MX;

    }

}

void preencherMatriz_Cal(unsigned char *mc,unsigned char *mt,int n,int m){

    int lin = n+2;
    int col = m+2;

    for(int k = 0; k<lin*col;k++){

        *(mc+k) = 0;

    }

int cont = 0;
    for(int k = 0; k<n; k++){

        for(int j = 0; j<m; j++){
            
             
            *(mc + ((k+1) * col + j+1) ) = *(mt+cont);

            cont ++;
        }

    }
    
    for(int k = 0; k<col*lin; k++){

        if(k%col == 0 && k != 0){

            puts("");

        }
        printf("%3u ",*(mc+k));


    }
    puts("");

}

void imprimirMatriz(unsigned char *mr,int n ,int m){

    for(int k = 0; k<n*m; k++){

        if(k%m == 0 && k != 0){

            puts("");

        }
        printf("  %3u ",*(mr+k));

    }

    puts("");
}

void gerarMatrizLBP(unsigned char *mc, unsigned char *mlbp, int n, int m) {
    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    int cols = m + 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            unsigned char c = mc[i * cols + j];
            unsigned char lbp = 0;

            for (int k = 0; k < 8; k++) {
                int ni = i + dy[k];
                int nj = j + dx[k];

                unsigned char v = mc[ni * cols + nj];

                if (v >= c)
                    lbp |= (1 << (7 - k));
            }

            mlbp[(i - 1) * m + (j - 1)] = lbp; 
        }
    }
}