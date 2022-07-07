#include<stdio.h>
#include<string.h>
int leeyvalida(int,int); //DECLARACION DE FUNCION
main()
{
    int dato;
    dato=leeyvalida(1,10);//LLAMADA A LA FUNCION
    printf("El dato es: %d",dato);
}
int leeyvalida(int li, int ls)//DESARROLLO DE FUNCION
{
    int dato;
    printf("Ingresar un dato (%d a %d): ",li,ls);
    scanf("%d",&dato);
    while(dato<li||dato>ls)
    {
    printf("ERROR. Ingresar un dato (%d a %d): ",li,ls);
    scanf("%d",&dato);
    }
    return dato;
}
