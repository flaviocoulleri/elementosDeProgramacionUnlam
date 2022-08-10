#include<stdio.h>
main()
{
    float pie;
    printf("Ingresar medida en pies: ");
    scanf("%f",&pie);
    printf("La medida en pulgadas: %.2f\n",pie*12);
    printf("La medida en yardas: %2f\n",pie/3);
    printf("La medida en cms: %.2f\n",pie*12*2.54);
    printf("La medida en mts: %.2f\n",((pie*12)*2.54)/100);
}
