#include<stdio.h>
void ordenar(int[],int);
main()
{
    int i,vec[10]={5,4,3,7,8,9,6,4,2,5};
    printf("Lista sin ordenar:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",vec[i]);
    }
    ordenar(vec,10);
    printf("Lista ordenada:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",vec[i]);
    }
}
void ordenar(int vec[],int max)
{
    int i,j,aux;
    for(i=0;i<max-1;i++)
    {
        for(j=0;j<max-i-1;j++)
        {
            if(vec[j]>vec[j+1])
            {
                aux=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=aux;
            }
        }
    }
}
