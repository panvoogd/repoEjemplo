#include <stdio.h>

int main()
{
    int arregloNumeros[100];
    int contador = 0;

    while(contador < 100)
    {
        arregloNumeros[contador] = 0;
        contador = contador + 1;
    }

    contador = 0;

    
    while(contador < 100)

    {
        printf("Numero : %i \n,",arregloNumeros[contador]);
        contador = contador + 1;
    }

    return 0;
}