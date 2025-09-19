#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int Valor = 100;
        int* Ponteiro1 =  &Valor;
        int** Ponteiro2 = &Ponteiro1;

        printf("\n%d",*Ponteiro1);
        printf("\n%d",**Ponteiro2);

        return 0;
    }