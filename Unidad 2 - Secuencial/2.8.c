//Se ingresa un número entero que representa una fecha con formato (ddmmaa). Se pide transformarlo a un
//número con formato (aammdd).
#include<stdio.h>
main()
{
	int numero,dia,mes,anio;
	printf("Ingresar una fecha en formato (ddmmaa): ");
	scanf("%d",&numero);
	dia=numero/10000;
	mes=numero%10000/100;
	anio=numero%10000%100;
	system("cls");
	printf("Fecha en (ddmmaa): %2d/%2d/%2d\n",dia,mes,anio);	
	printf("Fecha en (aammdd): %2d/%2d/%2d",anio,mes,dia);
}
