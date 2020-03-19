#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Función para cambiar de pesos a dólares
float pesosAdolares(float a, float b)
{
    return b / a;

}
//Función para cambiar de dólares a pesos
float dolaresApesos(float a, float b)
{
    return a * b;
}

int main()
{
printf("Convertidor de pesos a dolares:\n");
    //se declaran las variables
        float a = 24.14;
        float b;
        int tipocambio;
//Se pregunta a que divisa se va a hacer el cambio
    printf("\n Si quieres cambiar de dolares a pesos mexicanos escribe 1, si quieres cambiar de pesos a dolares escribe 2: ");
    scanf("%i", &tipocambio);

//Se pide la cantidad a cambiar, se realiza el cambio y se imprime el resultado
    if (tipocambio == 1)
    {
        printf("\n Escribe la cantidad que quieres cambiar: ");
        scanf("%f", &b);
        printf("\n %f dolares son %f pesos mexicanos\n", b, dolaresApesos(a,b));
    }
    else if (tipocambio == 2)
    {
        printf("\n Escribe la cantidad que quieres cambiar: ");
        scanf("%f", &b);
        printf("\n %f pesos mexicanos son %f dolares\n", b, pesosAdolares(a,b));
    }
    else
    {
        printf("\n Por favor selecciona una opcion valida!\n ");
    }


    return 0;
}
