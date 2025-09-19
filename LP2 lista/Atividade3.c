#include <stdio.h>
#include <stdlib.h>

    int main(void){

        static int Vetor[5] = {1,2,3,4,5};
        int* Ponteiro = Vetor;

            for(int i=0;i<5;i++)
                printf("\n%d",*(Ponteiro + i));

            for(int j = 0; j<5;j++)
                *Ponteiro += *(Ponteiro + j);
            
                printf("\n%d",*Ponteiro);

        return 0;
    }
