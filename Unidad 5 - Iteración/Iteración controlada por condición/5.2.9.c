#include<stdio.h>
main()
{   float sueldo,sueldonuevo,total=0;
    int empleado=0,cond,anios,hijos;
    char estudios;
    do{
        printf("Ingrese el sueldo basico: ");
        scanf("%f",&sueldo);
        printf("Ingrese la antiguedad: ");
        scanf("%d",&anios);
        printf("Ingrese la cantidad de hijos: ");
        scanf("%d",&hijos);
        getchar();
        printf("Estudios superiores 's' o 'n': ");
        scanf("%c",&estudios);
        sueldonuevo=sueldo;
        empleado++;
        if(anios>10)
        {
            sueldonuevo+=sueldo*0.1;
        }
        if(hijos>=2)
        {
            sueldonuevo+=sueldo*0.1;
        }
        else
            if(hijos==1)
            {
            sueldonuevo+=sueldo*0.05;
            }
        if(estudios=='s')
        {
            sueldonuevo+=sueldo*0.05;
        }
        total+=sueldonuevo;
         printf("\nNumero de empleado: %d\nSueldo basico: %.f\nSueldo nuevo: %.f\n",empleado,sueldo,sueldonuevo);
         printf("Si desea ingresar otro empleado ingrese 1, sino 0...\n");
         scanf("%d",&cond);
    }while(cond!=0);
    printf("\nEl promedio de los sueldos nuevos es: %.f",total/empleado);
}
