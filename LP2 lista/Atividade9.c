#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int x,y;
        int* PonteiroX,* PonteiroY;
        PonteiroX = &x, PonteiroY = &y;

        printf("\n%p",PonteiroX);
        printf("\n%p",PonteiroY);

        if(PonteiroX > PonteiroY)
            printf("\nO maior e o X: %p",PonteiroX);
            else
                printf("\nO maior e o Y: %p",PonteiroY);

        return 0;
    }