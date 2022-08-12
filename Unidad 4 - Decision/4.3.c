//Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
//es igual a la suma de los otros dos.
#include<stdio.h>
int main(){
    int nro1,nro2,nro3;
printf("Ingresa el primer numero: ");
scanf("%d",&nro1);
printf("Ingresa el segundo numero: ");
scanf("%d",&nro2);
printf("Ingresa el tercer numero: ");
scanf("%d",&nro3);
if(nro1==(nro2+nro3))
    printf("El primer numero es mayor a la suma de los otros dos");
else
    if(nro2==(nro1+nro3))
    printf("El segundo numero es mayor a la suma de los otros dos");
    else
        if(nro3==(nro1+nro2))
    printf("El tercer numero es mayor a la suma de los otros dos");
    else
        printf("Ningun numero es igual a la suma de los otros dos");
return 0;
}
