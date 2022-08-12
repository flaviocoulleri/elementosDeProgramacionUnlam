//Se ingresan 3 números distintos. Determinar el mayor.
#include<stdio.h>
main()
{
    int nro1,nro2,nro3;
    printf("Ingresar numero 1: ");
    scanf("%d",&nro1);
    printf("Ingresar numero 2: ");
    scanf("%d",&nro2);
    printf("Ingresar numero 3: ");
    scanf("%d",&nro3);
    if(nro1>nro2&&nro1>nro3)
    {
        printf("El numero 1 es mayor");
    }
    else
        if(nro2>nro1&&nro2>nro3)
        {
            printf("El numero 2 es mayor");
        }
        else
            printf("El numero 3 es mayor");

}
