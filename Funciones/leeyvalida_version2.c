#include<stdio.h>
#include<string.h>
int leeyvalida(int,int,char[]); //DECLARACION DE FUNCION
main()
{
    int dato;
    dato=leeyvalida(1,10,"Ingresar un dato (1 a 10): ");//LLAMADA A LA FUNCION
    printf("El dato es: %d",dato);
}
int leeyvalida(int li, int ls,char variable[])//DESARROLLO DE FUNCION
{
    int dato;
    printf("%s",variable);
    scanf("%d",&dato);
    while(dato<li||dato>ls)
    {
    printf("ERROR. %s",variable);
    scanf("%d",&dato);
    }
    return dato;
}
