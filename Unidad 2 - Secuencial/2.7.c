//Se ingresa un número entero de 3 cifras. Descomponerlo en unidad, decena y centena.
#include<stdio.h>
main()
{
	int numero;
	printf("Ingresar un numero: ");
	scanf("%d",&numero);
	printf("Centena: %d\n",numero-numero%100);
	printf("Decena: %d\n",(numero%100)-(numero%100)%10);
	printf("Unidad: %d\n",(numero%100)%10);
}
