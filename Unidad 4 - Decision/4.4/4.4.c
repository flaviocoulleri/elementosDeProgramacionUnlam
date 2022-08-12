#include<stdio.h>
main()
{
    int nro1,nro2,nro3;
    printf("Ingresar el primer numero: ");
    scanf("%d",&nro1);
    printf("Ingresar el segundo numero: ");
    scanf("%d",&nro2);
    printf("Ingresar el tercer numero: ");
    scanf("%d",&nro3);
    if(nro1>nro3&&nro2>nro3)
        printf("MAYORES AL TERCERO.");
    else
        if(nro1==nro2==nro3)
        printf("TRES IGUALES");
        else
            if(nro1<nro3||nro2<nro3)
            printf("ALGUNO ES MENOR");
}
