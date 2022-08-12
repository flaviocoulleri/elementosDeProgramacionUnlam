//Una pizzería vende empanadas por unidad o por docena, la docena cuesta $300 pero si se compra
//individualmente se cobra $30 la unidad. Si se compran más empanadas que no se agrupen en docenas las
//adicionales se cobran como por unidad. Indicar el precio total a abonar.
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
