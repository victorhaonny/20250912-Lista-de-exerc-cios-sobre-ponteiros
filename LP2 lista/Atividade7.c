#include <stdio.h>
#include <stdlib.h>

    int main(void){

        float Valor[4] = {1.5,2.5,3.5,4.5};

        float* p = Valor;

        for(int i=0;i<4;i++)
            printf("\n%p",p+i);
            for(int i=0;i<4;i++){
                printf("\nValor: %f",*p);
                p++;
            }
        return 0;
    }
