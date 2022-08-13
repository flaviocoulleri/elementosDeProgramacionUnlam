//Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor 
//valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.
#include<stdio.h>
main()
{
	int nro1,nro2,nro3,nro4;
	printf("Ingresar el primer numero: ");
	scanf("%d",&nro1);
	printf("Ingresar el segundo numero: ");
	scanf("%d",&nro2);
	printf("Ingresar el tercer numero: ");
	scanf("%d",&nro3);
	printf("Ingresar el cuatro numero: ");
	scanf("%d",&nro4);
	if(nro1<nro2&&nro1<nro3&&nro1<nro4)
	printf("El primer numero ingresado es el menor (%d)",nro1);
	else
		if(nro2<nro1&&nro2<nro3&&nro2<nro4)
		printf("El segundo numero ingresado es el menor (%d)",nro2);
		else
			if(nro3<nro2&&nro3<nro1&&nro3<nro4)
			printf("El tercer numero ingresado es el menor (%d)",nro3);
			else
				printf("El cuarto numero ingresado es el menor (%d)",nro4);
}
