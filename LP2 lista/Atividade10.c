#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int* Valores[3],a=10,b=20,c=30;

        Valores[0] = &a;
        Valores[1] = &b;
        Valores[2] = &c;

        for(int i=0;i<3;i++)
            printf("\nValor: %d",*Valores[i]);

        return 0;
    }
