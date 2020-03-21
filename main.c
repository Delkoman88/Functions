#include <stdio.h>
#include <stdlib.h>

char NombreAlumno[] = {""};
float Calificacion;

void evaluacion()
{
    if ((Calificacion >= 7 ) && (Calificacion <= 10))
    {
        printf("\n %s esta aprobado \n", NombreAlumno);
    }
    else if (Calificacion < 7)
    {
        printf("\n %s esta reprobado \n", NombreAlumno);
    }
    else
    {
        printf("\n Por favor ingresa una calificacion valida \n");
    }

}

int main()
{
    printf("Reto usando variables globales\n");

    printf("\n Escribe el nombre del alumno: ");
    scanf("%s", &NombreAlumno);

    printf("\n Ingresa su calificacion del 1 al 10: ");
    scanf("%f", &Calificacion);

    evaluacion();

    return 0;
}
