//Ingresar el valor de la hora y la cantidad de horas trabajadas por un empleado. Calcular su sueldo tomando
//en cuenta que recibe un premio de $500 si trabajo m�s de 50 horas y, adem�s, si trabaj� m�s de 150 horas
//se le otorgan $1000 adicionales.
#include<stdio.h>
int main(){
    int horas,v_hora,sueldo;
printf("Ingrese las horas trabajadas: ");
scanf("%d",&horas);
printf("Ingrese el valor de las horas: ");
scanf("%d",&v_hora);
if(horas>50)
{
    sueldo=(v_hora*horas+500);
    if(horas>150)
        sueldo+=1000;
}
    else
    {
        sueldo=v_hora*horas;
    }
printf("El sueldo es: %d",sueldo);
return 0;
}
