//Se ingresan 3 números enteros. Informarlos en orden creciente.
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
    if(nro1>nro2&&nro2>nro3)
        printf("ORDEN|NUMERO\n1    |%6d\n2    |%6d\n3    |%6d\n",nro1,nro2,nro3);
    else
        if(nro2>nro1&&nro1>nro3)
        printf("ORDEN|NUMERO\n1    |%6d\n2    |%6d\n3    |%6d\n",nro2,nro1,nro3);
        else
            if(nro3>nro2&&nro2>nro1)
            printf("ORDEN|NUMERO\n1    |%6d\n2    |%6d\n3    |%6d\n",nro3,nro2,nro1);
            else
                if(nro3>nro1&&nro1>nro2)
                printf("ORDEN|NUMERO\n1    |%6d\n2    |%6d\n3    |%6d\n",nro3,nro1,nro2);
                else
                    if(nro1>nro3&&nro3>nro2)
                    printf("ORDEN|NUMERO\n1    |%6d\n2    |%6d\n3    |%6d\n",nro1,nro3,nro2);
                    else
                        printf("ORDEN|NUMERO\n1    |%6d\n2    |%6d\n3    |%6d\n",nro2,nro3,nro1);
}
