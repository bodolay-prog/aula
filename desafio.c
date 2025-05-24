#include <stdio.h>
#define range 8 
int main()
{
    unsigned char sys= 0x00;
    unsigned char mask=0x01;
    unsigned  to;
    
// Preenchendo os status
for(int i=0;i<range-4;i++)
    {
        printf("Digite o status da máquina %d: ", i+1);
        scanf("%d",&to);
        if(to==1)
        {
            sys = sys|(mask<<i);    
        }

        if(to!=0||to!=1)
        {
            puts("Digite um status correto.");
            i--;
            continue;
        }


        printf("Digite o status de leitura da máquina %d: ", i+1);
        scanf("%d",&to);
        if(to==1)
        {
            sys = sys|(mask<<(i+4));    
        }

        if(to!=0||to!=1)
        {
            puts("Digite um status correto.");
            i--;
            continue;
        }
    
    }
    

//Mostrando o status do sistema completo
for(int i=0;i<range-4;i++)
{
    
    (sys & (mask << (i)))?printf("Equipamento %d - Ligado - ",i+1):printf("Equipamento %d - Desligado - ",i+1);
    (sys & (mask << ((range-4)+i)))?printf("Alto\n"):printf("Baixo\n");
}


    return 0;
}