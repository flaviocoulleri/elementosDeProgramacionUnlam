//Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular
//e informar la suma de sus dígitos hasta llegar a una sola cifra. Ej:2561 ? 5.
#include<stdio.h>
main()
{
	int numero,mil,centena,decena,unidad;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	mil=numero/1000;
	centena=numero%1000/100;
	decena=numero%1000%100/10;
	unidad=numero%1000%100%10;
	numero=mil+centena+decena+unidad;
	if(numero>9)
	{
	decena=numero/10;
	unidad=numero%10;
	numero=decena+unidad;
	printf("La suma de sus digitos es: %d",numero);
	}
	else
	printf("La suma de sus digitos es: %d",numero);
}
