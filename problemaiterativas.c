#include <stdio.h>

int main()
{
    short contador = 1;
    short limiteSuperior = 40;

    while (contador <= limiteSuperior)
    {
        if((contador % 5 == 0) && (contador % 3 == 0 ))
        {
            printf("Mul-5 & Mul-3 \n");
        }
        
        if(contador % 5 == 0)
        {
            printf("Mul-5 \n");
        }

        if(contador % 3 == 0)
        {
            printf("Mul-3 \n");
        }

        printf("Numero : %i \n", contador);
        contador = contador + 1;
    }



    return 0;
}