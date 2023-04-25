#include <stdio.h>

void cambiarNumeros(int num1, int num2);
void intercambiarNumeros(int *num1, int *num2);

int main()

{
int num1 = 270;
int num2 = 455;

int* dirnum1 = &num1;
int* dirnum2 = &num2;

printf("Num1 es: %i \n",num1);
printf("La dirección es: %p \n",dirnum1);

printf("Num2 es: %i \n",num2);
printf("La dirección es: %p \n",dirnum2);

printf("Num1 es: %i \n",*dirnum1);
printf("Num2 es: %i \n",*dirnum2);

printf("Num1 es: %i \n",*(dirnum2 +1));
printf("Num1 + Num2 es: %i \n",(*dirnum1 +*dirnum2));

cambiarNumeros(num1,num2);
printf("Num1 es: %i \n",num1);
printf("Num2 es: %i \n",num2);

intercambiarNumeros(&num1, &num2);
printf("Num1 es: %i \n",num1);
printf("Num2 es: %i \n",num2);

return 0;

}
void cambiarNumeros(int num1, int num2)
{
    int temporal = num1;
    num1 = num2;
    num2= temporal;
    printf("Num1 es: %i \n",num1);
    printf("Num2 es: %i \n",num2);
}

void intercambiarNumeros(int* num1, int* num2)

{
    int temporal = *num1;
    *num1 = *num2;
    *num2 = temporal;
}