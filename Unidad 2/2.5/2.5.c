#include<stdio.h>
main()
{   int tarros;
    printf("Ingresar la cantidad de tarros de pintura: ");
    scanf("%d",&tarros);
    printf("La cantidad de tarros de 20Lt es: %d\n",tarros/20);
    printf("La cantidad de tarros de 4Lt es: %d\n",tarros%20/4);
    printf("La cantidad de tarros de 1Lt es: %d\n",tarros%20%4);
}
