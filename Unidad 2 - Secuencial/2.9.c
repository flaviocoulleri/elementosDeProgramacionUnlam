//Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB)1
//y lo informe expresado en:
//TiB, GiB, MiB, con leyendas aclaratorias. (1MiB = 1024 KiB; 1GiB = 1024 MiB; 1TiB = 1024 GiB)
#include<stdio.h>
main()
{
	int memoria;
	printf("Ingresar memoria expresada en KiB: ");
	scanf("%d",&memoria);
	printf("Mib: %d\n",memoria/1024);
	printf("Gib: %d\n",(memoria/1024)/1024);
	printf("Tib: %d\n",((memoria/1024)/1024)/1024);
}
