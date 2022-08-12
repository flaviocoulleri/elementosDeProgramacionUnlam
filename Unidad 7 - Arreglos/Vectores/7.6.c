#include<stdio.h>
void ingresacodigo(int[]);
int leeyvalida(int,int);
int leeyvalida2(int,int,int);
int busqueda (int[],int,int);
void mostrar(int[],int[]);
void mayor(int[],int[]);
void menor(int[],int[]);
int main()
{   int vec[10],vec2[10]={0},cod,pos,cant,may;
    printf("Inicio de carga de codigos.\n");
    ingresacodigo(vec);
    printf("Fin de carga de codigos.\n");
    cod=leeyvalida2(1000,9999,0);
    while(cod!=0)
    {
        pos=busqueda(vec,10,cod);
        if(pos!=-1)
            {printf("Ingrese la cantidad: ");
            scanf("%d",&cant);
                if(cant>0)
                {
                    vec2[pos]+=cant;
                }
            }
        cod=leeyvalida2(1000,9999,0);
    }
    system("cls");
    mostrar(vec,vec2);
    mayor(vec,vec2);
    menor(vec,vec2);
}
void ingresacodigo(int vec[])
{
    int i,cod;
    for(i=0;i<10;i++)
    {
        cod=leeyvalida(1000,9999);
        vec[i]=cod;
    }
}
int leeyvalida(int li,int ls)
{
    int cod;
    printf("Ingresar codigo: ");
    scanf("%d",&cod);
    while(cod<li||cod>ls)
    {
    printf("Ingresar codigo nuevamente: ");
    scanf("%d",&cod);
    }
    return cod;
}
int leeyvalida2(int li,int ls,int exc)
{
    int cod;
    printf("Ingresar codigo: ");
    scanf("%d",&cod);
    while((cod<li||cod>ls)&&cod!=exc)
    {
    printf("Ingresar codigo nuevamente: ");
    scanf("%d",&cod);
    }
    return cod;
}
int busqueda(int vec[],int n,int dato)
{
    int i=0,pos=-1;
    while(i < n && pos == -1)
    {
        if(vec[i]==dato)
            pos=i;
        else
            i++;
    }
    return pos;
}
void mostrar(int vec[],int vec2[])
{   int i;
    printf("Codigo|Cantidad\n");
    for(i=0;i<10;i++)
    {
    printf("%6d|%8d\n",vec[i],vec2[i]);
    }
}
void mayor(int v1[],int v2[])
{
    int i,aux,pos;
    for(i=0;i<10;i++)
    {
        if(i==0||v2[i]>aux)
            {aux=v2[i];
            pos=i;}
    }
    printf("Mayor cantidad %d con el codigo %d",aux,v1[pos]);
}
void menor(int v1[],int v2[])
{
    int i,aux,pos;
    for(i=0;i<10;i++)
    {
        if(i==0||v2[i]<aux)
            {aux=v2[i];
            pos=i;}
    }
    printf("\nMenor cantidad %d con el codigo %d",aux,v1[pos]);
}
