//Ingresar un vector de 10 unidades reales mediante una funci�n llamada CARGA. Luego mediante una
//segunda funci�n llamada INVERTIR, generar un segundo vector del mismo tama�o con los elementos ubicados
//en el orden inverso al del vector original. Mostrar el vector invertido con una funci�n llamada MOSTRAR.
#include<stdio.h>
void carga(int[]);
void invertir(int[],int[]);
void mostrar(int[]);
main()
{
    int vector[10]={0},invertido[10]={0};
    carga(vector);
    invertir(vector,invertido);
    mostrar(invertido);
}
void carga(int vec[])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Ingresar dato en la posicion %d:",i+1);
        scanf("%d",&vec[i]);
    }
}
void invertir(int vec[],int aux[])
{
    int i;
    for(i=0;i<10;i++)
    {
         aux[10-1-i]=vec[i];
    }
}
void mostrar(int vec[])
{
    int i;
    printf("DATO|POSICION\n");
    for(i=0;i<10;i++)
    {
        printf("%4d|%8d\n",vec[i],i+1);
    }
}
