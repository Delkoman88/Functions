#include <stdio.h>
#include <stdlib.h>

int Addition(int a, int b)
{
    return a + b;

}

int main()
{
    printf("Funciones!\n");

    int additionRes = Addition(3,4);

    printf("El resultado es: %i,", additionRes);


    return 0;
}
