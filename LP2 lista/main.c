#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int X=10;
        int* Ponteiro = &X;

        printf("\nO valor de X: %d",X);
        printf("\nO endereco de x:%p",&X);
        printf("\nO valor de ponteiro: %p",Ponteiro);
        printf("\nO valor apontado por ponteiro: %d",*Ponteiro);
        printf("\n");
        system("PAUSE");
        return 0;
    }
