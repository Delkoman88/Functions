#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Función para cambiar de pesos a dólares
float dolares(float a, float b)
{
    return a * b;

}

float pesos(float b, float c)
{
    return b * c;
}

int main()
{
    int tipocambio;

    printf("Si quieres cambiar de dolares a pesos escribe 1, si quieres cambiar de pesos a dolares escribe 2: ")
    scanf("%i", &tipocambio);

//se declaran las variables
        float a = 0.043;
        float b;
    printf("Convertidor de pesos a dolares:\n");
//Se pide el núimero base
    printf("\n Ingresa el valor en pesos: ");
    scanf("%f", &b);

//Se guarda el resultado
    float dolaresRes = dolares(a,b);
//Se imprime el resultado
    printf("\n %f pesos son: %f dolares \n", b, dolaresRes);


    return 0;
}
