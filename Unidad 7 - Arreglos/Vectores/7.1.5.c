/*Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Por
cada pedido se recibe:
• Código de producto (de 1 a 10)
• Cantidad de unidades solicitadas
Se puede recibir más de un pedido por producto.
La carga finaliza cuando se ingresa un producto con código igual a cero.
Al finalizar se debe emitir un listado con código y cantidad de unidades solicitadas de cada producto.*/
#include<stdio.h>
int leeyvalida(int,int);
void carga(int[],int);
void mostrar(int[]);
int main()
{
    int cod,vec[10]={0};
    cod=leeyvalida(0,10);
    while(cod!=0)
    {
    carga(vec,cod);
    cod=leeyvalida(0,10);
    }
    system("cls");
    mostrar(vec);
}
int leeyvalida(int li,int ls)
{
    int cod;
    printf("Ingrese el codigo: ");
    scanf("%d",&cod);
    while(cod<li||cod>ls)
    {
    printf("Ingrese el codigo nuevamente: ");
    scanf("%d",&cod);
    }
    return cod;
}
void carga(int vec[],int cod)
{
    int cant;
    printf("Ingresar la cantidad: ");
    scanf("%d",&cant);
    if(cant>0)
    vec[cod-1]+=cant;
    else
        printf("Cantidad no valida.");
}
void mostrar(int vec[])
{
    int i;
    printf("Codigo|Cantidad\n");
    for(i=0;i<10;i++)
    {
        printf("%6d|%8d\n",i+1,vec[i]);
    }
}


