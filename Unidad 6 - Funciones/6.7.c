#include<stdio.h>
int leeyvalidar(int,int);
void mayormenor(int,int,int);
main()
{   int num1,num2,num3;
    num1=leeyvalidar(0,99);
    num2=leeyvalidar(0,99);
    num3=leeyvalidar(0,99);
    while(!((num1==96)&&(num2==97)&&(num3==98)))
    {
        mayormenor(num1,num2,num3);
        num1=leeyvalidar(0,99);
        num2=leeyvalidar(0,99);
        num3=leeyvalidar(0,99);
    }

}
int leeyvalidar(int li,int ls)
{
    int num;
    printf("Ingresar numero: ");
    scanf("%d",&num);
    while(num>=ls||num<=li)
    {
        printf("Ingrese nuevamente: ");
        scanf("%d",&num);
    }
    return(num);
}
void mayormenor(int num1,int num2,int num3)
{
    if(num1>num2&&num1>num3)
    {
        printf("El numero 1 (%d) es mayor.\n",num1);
    }
    else
        if(num2>num1&&num3>num1)
        {
        printf("El numero 2 (%d) es mayor.\n",num2);
        }
        else
        printf("El numero 3 (%d) es mayor.\n",num3);

}
