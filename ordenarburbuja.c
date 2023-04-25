#include <stdio.h>


// void intercambiarNumeros(int *num1, int *num2);

void intercambiarNumeros(int *num1, int *num2);

int main()


{
    int arrOrd[] = {300,54,2,3,52,35,65,23,12,76,323,1,48};
    
    /*
    Algoritmo Burbuja, se compara 2 a 2 :
    34 2 3 52 35 54 23 12 65 76 1 323
    2 3 34 35 52 23 12 54 65 1 76 323
    2 3 34 35 23 12 52 54 1 65 76 323
    2 3 34 23 12 35 52 1 54 65 76 323
    2 3 23 12 34 35 1 52 54 65 76 323
    2 3 12 23 34 1 35 52 54 65 76 323
    2 3 12 23 1 34 35 52 54 65 76 323
    2 3 12 1 23 ...
    2 3 1 12 23 ...
    2 1 3 12 ....
    1 2 3 12 23 ....
    */

   int contador; // contador para avanzar sobre el array
   short intercambio; // se usa como flag para saber si ya esta ordenado
   short n_veces = 0; // para contar las veces que hay intercambios
   int cantElem = sizeof(arrOrd)/sizeof(arrOrd[0]); // int lenArray = sizeof(array) / sizeof(array[0]);


   do {
        contador = 0;
        intercambio = 0;

        while(contador < (cantElem -1))
        {
        if(arrOrd[contador] > arrOrd[contador + 1])
        {
            intercambiarNumeros(&arrOrd[contador], &arrOrd[contador + 1]);
            n_veces = n_veces + 1;
            intercambio = 1;
        }
        contador = contador + 1;
        }
    } while(intercambio != 0);

printf("Fueron hechos intercambios %i \n", n_veces);

contador = 0;
while(contador < cantElem)
{
    printf("Numero en el indice %i : %i \n", contador, arrOrd[contador]);
    contador = contador + 1;
}
    return 0;
}

void intercambiarNumeros(int *num1, int *num2)
{
   int temporal = *num1;
    *num1 = *num2;
    *num2 = temporal; 
}