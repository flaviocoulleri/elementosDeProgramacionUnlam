//Realizar un programa que ingrese dos n�meros e indique si el primer n�mero es divisible por el segundo.
#include<stdio.h>
main()
{
	int nro1,nro2;
	printf("Ingresar el primer numero: ");
	scanf("%d",&nro1);
	printf("Ingresar el segundo numero: ");
	scanf("%d",&nro2);
	if((nro1%nro2)==0)
	{
		printf("El primer numero es divisible por el segundo.");
	}
}
