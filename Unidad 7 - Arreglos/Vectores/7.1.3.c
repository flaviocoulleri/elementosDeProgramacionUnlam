//Realizar una función que reciba por parámetro dos vectores enteros de 5 elementos cada uno y genere
//un vector de 10 posiciones con el contenido de ambos vectores intercalados.
#include<stdio.h>
void carga(int[]);
void intercalar(int[],int[],int[]);
void generarvector(int[],int[]);
void mostrar(int[]);
int main()
{
    int vec1[5],vec2[5];
    printf("Vector 1:\n");
    carga(vec1);
    printf("Vector 2:\n");
    carga(vec2);
    generarvector(vec1,vec2);

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
void generarvector(int vec1[],int vec2[])
{   int i, vec3[10];
    intercalar(vec1,vec2,vec3);
    mostrar(vec3);
}

void intercalar(int vec1[],int vec2[],int vec3[])
{
    int i,j=0;
    for(i=0;i<5;i++)
    {
        vec3[j]=vec1[i];
        j++;
        vec3[j]=vec2[i];
        j++;
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
