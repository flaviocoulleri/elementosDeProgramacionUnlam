#include<stdio.h>
void carga(int[]);
void juntar(int[],int[],int[]);
void mostrar(int[]);
int main()
{
    int vec1[5],vec2[5],vec3[10];
    printf("Vector 1:\n");
    carga(vec1);
    printf("Vector 2:\n");
    carga(vec2);
    juntar(vec1,vec2,vec3);
    mostrar(vec3);
}
void carga(int vec[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero para la posicion %d: ",i+1);
        scanf("%d",&vec[i]);
    }
}
void juntar(int vec1[],int vec2[],int vec3[])
{
    int i,j;
    for(j=0;j<5;j++)
    {
    vec3[j]=vec1[j];
    }
    for(i=0;i<5;i++)
    {
    vec3[j+i]=vec2[i];
    }
}
void mostrar(int vec[])
{
    int i;
    printf("Posicion|Contenido\n");
    for(i=0;i<10;i++)
    {
        printf("%8d|%9d\n",i+1,vec[i]);
    }
}
