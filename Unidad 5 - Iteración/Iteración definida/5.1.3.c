//Se ingresan 50 números enteros. Determinar el promedio de los números pares
#include<stdio.h>
int main(){
float promedio;
int i,nro,sumapromedio=0,nropar=0;
for(i=1;i<=5;i++)
{
    printf("Ingresa el numero %d: ",i);
    scanf("%d",&nro);
    if((nro%2)==0)
        {nropar++;
        sumapromedio+=nro;
        }

}
printf("El promedio de los numeros pares es: %d",sumapromedio/nropar);
return 0;
}
