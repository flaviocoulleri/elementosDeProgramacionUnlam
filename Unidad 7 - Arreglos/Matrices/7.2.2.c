//Ingresar una matriz de 2x3 por teclado. Calcular la matriz transpuesta.
#include<stdio.h>
main()
{
	int i,j,matriz[2][3]={{0}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingresar numero en la fila %d columna %d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	system("cls");
	printf("Matriz original:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("Matriz transpuesta:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",matriz[j][i]);
		}
		printf("\n");
	}
}
