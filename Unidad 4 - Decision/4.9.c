// Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo 
//ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII.
#include<stdio.h>
main()
{
	char vocal;
	printf("Ingrese caracter alfanumerico: ");
	fflush(stdin);
	scanf("%c",&vocal);
	if(vocal=='a'||vocal=='A'||vocal=='e'||vocal=='E'||vocal=='i'||vocal=='I'||vocal=='O'||
	vocal=='o'||vocal=='U'||vocal=='u')
	printf("VOCAL: %d",vocal);
	else
	printf("No es vocal.");
}
