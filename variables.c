/*

0000 0000 0000 


short a = 64;

short d = 93;

int b = 85;

long c = 153;

Binario --> Hexadecimal:

0 1 2 3 4 5 6 7 8 9 A B C D E F (16)

0010 1110 --->  2Dh
MSB   LSB



*/

#include <stdio.h>

int main()
{
    printf("El tamaño de las variables short es : %ld \n", sizeof(short));
    printf("El tamaño de las variables short es : %ld \n", sizeof(int));
    printf("El tamaño de las variables short es : %ld \n", sizeof(long long));

    short a = 32765;
    printf("El valor de a es: %i \n",a);

    a = a + 2;
    printf("El valor de a es: %i \n",a);

    a = a + 1;
    printf("El valor de a es: %i \n",a);

    int b = 2147483646;
    printf("El valor de b es: %i \n",b);

    b =  b + 2;
    printf("El valor de b es: %i \n",b);

    b = b + 1;
    printf("El valor de b es: %i \n",b);

    int c = 0b101110; //46 

    printf("El valor de c es: %i \n",c);

    int d = 0x2E;
    printf("El valor de d es: %x \n",d);

    printf("El tamaño de las variables char es : %ld \n", sizeof(char));

    char e = 'a';
    printf("El valor de e es: %c \n",e);
    e= e + 3;
    printf("El valor de e es: %c \n",e);
    printf("El valor de e es: %i \n",e);


        printf("El tamaño de las variables float es : %ld \n", sizeof(float));
        printf("El tamaño de las variables double es : %ld \n", sizeof(double));


    float f = 24.364;
    double g = 24.364;
    printf("El valor de f es: %.2f \n",f);
    printf("El valor de g es: %.1f \n",g);

    int k = 6;
    int l = 25;

    float m;
    m = (float)k / l;
    printf("El valor de m es: %.4f \n",m);


return 0;


}