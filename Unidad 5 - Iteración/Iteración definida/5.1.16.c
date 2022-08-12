//Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota
//promedio (considerar único).
#include<stdio.h>
int main(){
int dni, nota, notamax, dnimax, flag=1, i;

for(i=1;i<=3;i++)
    {
        printf("Ingrese dni: ");
        scanf("%d",&dni);
        printf("Ingrese nota: ");
        scanf("%d",&nota);
        if(flag==1||notamax<nota)
        {
            notamax=nota;
            dnimax=dni;
        }
    }
printf("\n\nLa mayor nota es: %d\nEl dni es: %d",notamax,dnimax);
}
