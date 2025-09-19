#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int a = 10, b=20;
        const int *ponteiro = &a;
        //*ponteiro = 30;
        ponteiro = &b;
        printf("%d",*ponteiro);

        return 0;
    }
