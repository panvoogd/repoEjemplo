#include <stdio.h>

int main()
{

    for(int numeroImprimir=0; numeroImprimir <= 20; numeroImprimir++)
    {
        printf("Numero : %i \n", numeroImprimir);
    }

    int contador = 0;
    while(contador <= 20)
    {
        printf("Numero (while) : %i \n", contador);
        contador = contador + 1;
    }

    do {
        printf("Numero (do...while) : %i \n", contador);
        contador = contador + 1;

    } while (contador <=20);


    return 0;
}