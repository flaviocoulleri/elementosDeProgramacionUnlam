#include<stdio.h>
main()
{
    int precio,cod;
    printf("Ingresa el precio: ");
    scanf("%d",&precio);
    printf("Ingresa el codigo: ");
    scanf("%d",&cod);
    printf("El precio es: $%.2f\n\n",precio-(precio*0.20)*cod);
}
