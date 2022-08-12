//Realizar un programa que muestre por pantalla las tablas de multiplicar del 1 al 9 de la siguiente forma:
#include<stdio.h>
int main(){
int i,j;
for(i=1;i<10;i++)
{printf("%2d ",i);
    for(j=2;j<10;j++)
        {printf("%2d ",i*j);}
printf("\n");
}
}
