//Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.
#include<stdio.h>
main()
{
    int nota1,nota2;
    float promedio;
    printf("Ingresar la nota 1: ");
    scanf("%d",&nota1);
    printf("Ingresar la nota 2: ");
    scanf("%d",&nota2);
    promedio=(nota1+nota2)/2;
    printf("El promedio es: %.f",promedio);
}
