#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Función para elevar x numero a y potencia
float potencia(int a, int b)
{
    return pow(a, b);

}

int main()
{
//se declaran las variables
    float a;
    float b;
    printf("Elevar un numero a x potencia:\n");
//Se pide el núimero base
    printf("\n Ingresa el numero base:");
    scanf("%f", &a);
//Se pide la potencia
    printf("\n Ingresa el exponente:");
    scanf("%f", &b);
//Se guarda el resultado
    float potenciaRes = potencia(a,b);
//Se imprime el resultado
    printf("\n El resultado es: %f \n", potenciaRes);


    return 0;
}
