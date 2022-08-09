#include<stdio.h>
main()
{
int matriz[3][3],i,j,escalar;
printf("Completar la matriz:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Ingresar numero en la fila %d, columna %d: ",i+1,j+1);
        scanf("%d",&matriz[i][j]);

    }
}
printf("Ingresar escalar: ");
scanf("%d",&escalar);
system("cls");
printf("Matriz por su escalar:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",matriz[i][j]*escalar);
    }
    printf("\n");
}

printf("Matriz original:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
}
}
