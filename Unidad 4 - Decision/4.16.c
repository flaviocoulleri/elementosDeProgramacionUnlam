//Un negocio vende distintos artículos identificados por un código, según se muestra:
//• código 1; 10; 100: 10 pesos la unidad.
//• código 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
//• código 3; 33: 3 pesos la unidad. Si la compra es por más de 10 unidades se hace un descuento del
//10% sobre el total de la compra.
//• código 4; 44: 1 peso la unidad.
//Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se
//informe el importe de la compra, con las siguientes leyendas:
//ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
#include<stdio.h>
int main(){
float impo=0;
int cod, cant;
printf("Ingrese la cantidad: ");
scanf("%d",&cant);
printf("Ingrese el codigo: ");
scanf("%d",&cod);

if((cod==1)||(cod==10)||(cod==100))
{
    impo=cant*10;
}
else
    if((cod==2)||(cod==22)||(cod==222))
    {
    impo=(cant/10)*65;
    impo+=((cant%10)*7);
    }
    else
        if((cod==3)||(cod==33))
        {if(cant>10)
            impo=(cant*3)*0.9;
        else
            impo=cant*3;
        }
        else
            if((cod==4)||(cod==44))
            impo=cant;
            else
                printf("Codigo no valido. ");

if(impo>0)
    printf("Articulo: %4d Cantidad: %4d Importe: %.2f",cod,cant,impo);
}
