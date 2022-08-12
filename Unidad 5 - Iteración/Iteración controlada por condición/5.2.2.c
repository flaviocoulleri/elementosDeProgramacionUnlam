//Escribir las sentencias que permitan el ingreso correcto del valor numérico de un día y un mes
//determinado. Por algún error volver a solicitar.
#include<stdio.h>
main()
{
    int mes, dia;
    printf("Ingrese un mes: ");
    scanf("%d",&mes);
    printf("Ingrese un dia: ");
    scanf("%d",&dia);
    while(!((((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))&&(dia==31))||(((mes==4)||(mes==6)||(mes==9)||(mes==11))&&(dia==30))||((mes==2)&&((dia==28)||(dia=29)))))
    {
        printf("Ingrese nuevamente...\n");
    printf("Ingrese un mes: ");
    scanf("%d",&mes);
    printf("Ingrese un dia: ");
    scanf("%d",&dia);
    }
    printf("Muy bien mi amor le pegaste.");
    return 0;
}
