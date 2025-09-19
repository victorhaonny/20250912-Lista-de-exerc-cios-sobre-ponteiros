#include <stdio.h>
#include <stdlib.h>

    typedef struct{

        int idade;
        float altura;

    }Pessoa;

    int main(void){

        Pessoa P;

        scanf("%d",&P.idade);
        scanf("%f",&P.altura);

        void* ponteiro = &P;

        printf("\n%d",P.idade);
        printf("\n%f",P.altura);

        return 0;
    }
