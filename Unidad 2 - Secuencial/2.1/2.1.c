#include<stdio.h>
main()
{
    int cant_horas_trabajadas,valor_por_hora;
    float sueldo;
    printf("Ingresar la cantidad de horas trabajadas: ");
    scanf("%d",&cant_horas_trabajadas);
    printf("Ingresar el valor por hora: ");
    scanf("%d",&valor_por_hora);
    sueldo=cant_horas_trabajadas*valor_por_hora;
    printf("El sueldo es $%.2f",sueldo);
}
