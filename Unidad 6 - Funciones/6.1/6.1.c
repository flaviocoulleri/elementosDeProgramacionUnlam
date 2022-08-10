#include<stdio.h>
int leeyvalida(int,int);
int menu(int,int);
void sumar(int,int);
void restar(int,int);
void multiplicar(int,int);
void dividir(int,int);
main()
{
    int nro1,nro2,opcion;
    printf("Ingresar numero 1: ");
    scanf("%d",&nro1);
    printf("Ingresar numero 2: ");
    scanf("%d",&nro2);
    system("cls");
    opcion=menu(nro1,nro2);
    while(opcion!=6)
    {
        system("cls");
        if(opcion==1)
            sumar(nro1,nro2);
        if(opcion==2)
            restar(nro1,nro2);
        if(opcion==3)
            multiplicar(nro1,nro2);
        if(opcion==4)
            dividir(nro1,nro2);
        if(opcion==5)
            {
                printf("Ingresar numero 1: ");
                scanf("%d",&nro1);
                printf("Ingresar numero 2: ");
                scanf("%d",&nro2);
            }
        system("cls");
        opcion=menu(nro1,nro2);
    }
}
int leeyvalida(int li,int ls)
{
    int nro;
    scanf("%d",&nro);
    while(nro>ls||nro<li)
        {
        printf("ERROR. Ingresar nuevamente: ");
        scanf("%d",&nro);
        }
    return nro;
}
int menu(int nro1,int nro2)
{   int op;
    printf("Menu de opciones: \n---- -- ---------\nNumero 1: %d Numero 2: %d\n",nro1,nro2);
    printf("1) Sumar\n");
    printf("2) Restar\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("5) Ingresar numeros nuevos\n");
    printf("6) Salir\n");
    printf("Ingrese su opcion: ");
    op=leeyvalida(1,6);
    return op;
}
void sumar(int nro1,int nro2)
{
    printf("Menu de opciones: \n---- -- ---------\nNumero 1: %d Numero 2: %d\n",nro1,nro2);
    printf("SUMA: %d\n\n\n",nro1+nro2);
    system("pause");
}
void restar(int nro1,int nro2)
{
    printf("Menu de opciones: \n---- -- ---------\nNumero 1: %d Numero 2: %d\n",nro1,nro2);
    printf("RESTA: %d\n\n\n",nro1-nro2);
    system("pause");
}
void multiplicar(int nro1,int nro2)
{
    printf("Menu de opciones: \n---- -- ---------\nNumero 1: %d Numero 2: %d\n",nro1,nro2);
    printf("MULTIPLICACION: %d\n\n\n",nro1*nro2);
    system("pause");
}
void dividir(int nro1,int nro2)
{
    printf("Menu de opciones: \n---- -- ---------\nNumero 1: %d Numero 2: %d\n",nro1,nro2);
    printf("DIVISION: %d\n\n\n",nro1/nro2);
    system("pause");
}
