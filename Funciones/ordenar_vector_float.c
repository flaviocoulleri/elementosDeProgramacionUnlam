#include<stdio.h>
void ordenar(float[],int);
main()
{
    int i;
    float vec[10]={5.2,4,3.7,7.2,8.3,9,6,4,2,5};
    printf("Lista sin ordenar:\n");
    for(i=0;i<10;i++)
    {
        printf("%.2f\n",vec[i]);
    }
    ordenar(vec,10);
    printf("Lista ordenada:\n");
    for(i=0;i<10;i++)
    {
        printf("%.2f\n",vec[i]);
    }
}
void ordenar(float vec[],int max)
{
    int i,j;
    float aux;
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
