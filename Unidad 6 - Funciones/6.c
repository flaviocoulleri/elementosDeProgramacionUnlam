#include<stdio.h>
int menu(int, int);
int sumar(int,int);
int restar(int,int);
int multiplicar(int,int);
float dividir(int,int);
main()
{   int nro1,nro2,opcion,resultado;
    float resultadof;
    printf("Ingresa el primer numero: ");
    scanf("%d",&nro1);
    printf("Ingresa el segundo numero: ");
    scanf("%d",&nro2);
    system("cls");
    do{
    opcion=menu(nro1,nro2);
    if(opcion==1)
    {
        resultado=sumar(nro1,nro2);
        printf("El resultado de la suma es: %d\n\n\n",resultado);
    }
    if(opcion==2)
    {
        resultado=restar(nro1,nro2);
        printf("El resultado de la resta es: %d\n\n\n",resultado);
    }
    if(opcion==3)
    {
        resultado=multiplicar(nro1,nro2);
        printf("El resultado de la multiplicacion es: %d\n\n\n",resultado);
    }
    if(opcion==4)
    {
        resultadof=dividir(nro1,nro2);
        printf("El resultado de la division es: %f\n\n\n",resultadof);
    }
    if(opcion==5)
    {
    printf("Ingresa el primer numero: ");
    scanf("%d",&nro1);
    printf("Ingresa el segundo numero: ");
    scanf("%d",&nro2);
    system("cls");
    }
    }while(opcion!=6);
}
int menu(int nro1,int nro2)
{   int nro;
    printf("Menu de opciones\n");
    printf("---- -- --------\n");
    printf("Numero 1: %2d  Numero 2: %2d\n",nro1,nro2);
    printf("\n1) Sumar\n");
    printf("2) Restar\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("5) Ingresar Nuevos Numeros\n");
    printf("6) Salir\n");
    do{printf("Ingrese su opcion: ");
    scanf("%d",&nro);}while(!(nro>0&&nro<7));
    return(nro);
}
int sumar(int nro1, int nro2)
{
    int resultado;
    resultado=nro1+nro2;
    return(resultado);
}
int restar(int nro1, int nro2)
{
    int resultado;
    resultado=nro1-nro2;
    return(resultado);
}
int multiplicar(int nro1, int nro2)
{
    int resultado;
    resultado=nro1*nro2;
    return(resultado);
}
float dividir(int nro1, int nro2)
{
    float resultado;
    resultado=nro1/nro2;
    return(resultado);
}
