//Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, cms.
//y mts. NOTA: 1 pie = 12 pulgadas; 1 yarda = 3 pies; 1 pulgada = 2,54 cms.
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
