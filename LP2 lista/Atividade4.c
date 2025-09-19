#include <stdio.h>
#include <stdlib.h>

    void troca(int*a,int *b){

        int Temporaria = *a;
        *a = *b;
        *b = Temporaria;

    }


    int main(void){

        int A = 15, B = 25;

        int* Ponteiro1,* Ponteiro2;

        Ponteiro1 = &A;
        Ponteiro2 = &B;

        troca(Ponteiro1,Ponteiro2);

        printf("%d - %d ",A,B);

        return 0;
    }
