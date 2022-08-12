//Confeccionar un programa que pueda ingresar 2 números enteros y calcule e informe con mensajes
//aclaratorios la suma, el producto, el cociente y el resto.
#include<stdio.h>
main()
{
    int nro1,nro2;
    printf("Ingresar el primer numero: ");
    scanf("%d",&nro1);
    printf("Ingresar el segundo numero: ");
    scanf("%d",&nro2);
    printf("La suma es: %d\n",nro1+nro2);
    printf("La resta es: %d\n",nro1-nro2);
    printf("El producto es: %d\n",nro1*nro2);
    printf("El cociente es: %d\n",nro1/nro2);
    printf("El resto es: %d\n",nro1%nro2);
}
