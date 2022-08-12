//Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
//programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
//precio final (0 no aplica el descuento y 1 aplica el descuento).
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
