//Conociendo la cantidad de tarros de pintura que existe en un depósito de una pinturería y sabiendo que el
//50% son tarros de 1Lt, el 30% tarros de 4Lts. y el resto tarros de 20Lts. Determinar la cantidad de tarros de
//1Lt., 4Lts. Y 20 Lts.
#include<stdio.h>
main()
{
	int tarros=16,chico,mediano,grande;
	chico=tarros/2;
	mediano=tarros*0.3;
	grande=tarros*0.2;
	printf("Tarros de 1 lt: %d\n",chico);
	printf("Tarros de 4 lt: %d\n",mediano);
	printf("Tarros de 20lt: %d\n",grande);
}
