//Confeccionar un programa que solicite el ingreso del valor del radio (r) de un c�rculo y con dicho valor calcule
//la superficie del c�rculo, la longitud de la circunferencia (per�metro) y el volumen de la esfera.
#include<stdio.h>
main()
{	
	float radio,pi=3.14;
	printf("Ingresar el valor del radio de un circulo: ");
	scanf("%f",&radio);
	printf("Superficie: %.2f\n",pi*(radio*radio));
	printf("Perimetro: %.2f\n",(pi*radio)*2);
	printf("Volumen: %.2f",(4/3)*pi*(radio*radio*radio));
}
