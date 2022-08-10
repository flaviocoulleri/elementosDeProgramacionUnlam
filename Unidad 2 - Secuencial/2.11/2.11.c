#include<stdio.h>
main()
{
    int cant,docenas,unidad;
    printf("Ingrese la cant de empanadas: ");
    scanf("%d",&cant);
    docenas=cant/12;
    unidad=cant%12;
    printf("El total es: $%d\n\n",docenas*300+unidad*30);
}
