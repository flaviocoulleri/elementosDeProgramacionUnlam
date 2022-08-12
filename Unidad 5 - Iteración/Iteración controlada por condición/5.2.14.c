//5.2.14 Se ingresan datos de los empleados de una empresa. Por cada empleado se ingresa:
//• Legajo (entero entre 1000 y 5000)
//• Sueldo básico (float mayor a 1000)
//• Antigüedad en años (mayor o igual a 0)
//• Sexo (‘M' o 'F')
//• Categoría (entero entre 1 a 5)
//Por cada empleado ingresado se debe calcular el sueldo final a abonar sabiendo que:
//• Las Categorías 2 y 3 tienen $500 de bonificación.
//• La Categoría 4 tiene 10% de bonificación.
//• La Categoría 5 tiene 30% de bonificación.
//• Si la antigüedad es mayor a 10 años recibe una bonificación del 10% adicional.
//Todos los datos ingresados deben ser validados. El ingreso finaliza con un legajo igual a cero.
//Informar:
//• El sueldo a abonar a cada empleado.
//• Cantidad de empleados de más de 10 años de antigüedad.
//• El mayor sueldo y el legajo del empleado que cobra dicho sueldo.
//• Cantidad de hombres y de mujeres.

#include<stdio.h>
int main()
{int legajo,b=0,male=0,female=0,antiguedad,viejos=0,legmax=0,categoria;
float sueldo,sueldomax=0;
char sexo;

do{
printf("Ingrese un legajo, 0 para finalizar: ");
scanf("%d",&legajo);
}while((legajo<0||legajo>5000));

while(legajo!=0)
    {
        while((legajo<1000||legajo>5000)){
        printf("Ingrese un legajo, 0 para finalizar: ");
        scanf("%d",&legajo);
        }
    do{printf("Ingrese el sueldo: ");
    scanf("%f",&sueldo);
    }while(!(sueldo>1000));
    do{printf("Ingrese la antiguedad: ");
    scanf("%d",&antiguedad);
    }while(!(antiguedad>=0));
    do{printf("Ingrese el sexo (\"m\" o \"f\"): ");
    getchar();
    scanf("%c",&sexo);
    }while(!(sexo=='m'||sexo=='f'));
    do{printf("Ingrese la categoria: ");
    scanf("%d",&categoria);
    }while(!(categoria>=1&&categoria<=5));
    if(categoria==2||categoria==3)
    {
        sueldo+=500;
    }
    if(categoria==4)
    {
        sueldo+=sueldo*0.1;
    }
    if(categoria==5)
    {
        sueldo+=sueldo*0.3;
    }
    if(antiguedad>=10)
    {
        sueldo+=sueldo*0.1;
        viejos++;
    }
    if(b==0||sueldo>sueldomax)
    {
        b=1;
        sueldomax=sueldo;
        legmax=legajo;
    }
    if(sexo=='m')
    {
        male++;
    }
    else{
       female++;
    }
    printf("El sueldo a abonar es: %.2f\n",sueldo);
    do{
printf("Ingrese un legajo, 0 para finalizar: ");
scanf("%d",&legajo);
}while((legajo<0||legajo>5000));
}
printf("Cantidad de viejos: %d\n",viejos);
printf("Mayor sueldo: %.2f con legajo: %d\n",sueldomax,legmax);
printf("Cantidad de mujeres: %d\tCantidad de hombres: %d\n",female,male);
system("pause");
}
