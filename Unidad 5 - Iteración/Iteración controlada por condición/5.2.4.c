//Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
//y un código que indica la forma de pago. El código puede ser:
//• C: cheque, 20% de recargo.
//• E: efectivo, 10% de descuento.
//• T: con tarjeta, 12% de recargo.
//Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
//Efectivo en Caja: $ xxxx.xx
//Ventas con Tarjeta de Crédito: $ xxxx.xx
//Ventas con cheque: $ xxxx.xx
//Total de Venta: $ xxxx.xx
//Importe del IVA: $ xxxx.xx
//Nota: El IVA corresponde al 21% del total de ventas.
#include<stdio.h>
main()
{

    float importe, efectivo=0,total=0,ventastarjeta=0, ventascheque=0;
    char codigo;
    printf("Ingrese el importe: ");
    scanf("%f",&importe);
    getchar();
    printf("Ingrese el codigo: ");
    scanf("%c",&codigo);

    while(codigo!='f')
    {
        if((codigo=='e')||(codigo=='t')||(codigo=='c'))
            {if(codigo=='e')
            {
            efectivo+=importe*0.9;
            total+=efectivo;
            }
            if(codigo=='t')
            {
            ventastarjeta+=importe*1.12;
            total+=importe*1.12;
            }
            if(codigo=='c')
            {
            ventascheque+=importe*1.2;
            total+=importe*1.2;
            }}
        else
            {printf("El codigo ingresado no es valido, ingrese nuevamente...\n");}

    printf("Ingrese el importe: ");
    scanf("%f",&importe);
    getchar();
    printf("Ingrese el codigo: ");
    scanf("%c",&codigo);

    }
if(total>0)
{
    printf("\n\nEfectivo en caja: $%.2f\n",efectivo);
    printf("Ventas con Tarjeta de Credito: $%.2f\n",ventastarjeta);
    printf("Ventas con Cheque: $%.2f\n",ventascheque);
    printf("Importe del iva: $%.2f\n",total*0.21);
}
else
    printf("No se registraron ventas.");
return 0;
}
