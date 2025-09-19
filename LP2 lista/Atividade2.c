#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int Y=5;
        int* Ponteiro = &Y;

        *Ponteiro = (*Ponteiro + 3) * 2;

        printf("%d",*Ponteiro);
        
        return 0;
    }
