//Ingresar N y N Números naturales. Determinar e informar:
//a. La sumatoria de los valores múltiplos de 3.
//b. La cantidad de valores múltiplos de 5.
//c. La sumatoria de los valores que se ingresan en orden par.
#include<stdio.h>
int main(){
    int nro,sumatoria_3=0,cant_5=0,i=0,suma2=0;
printf("Ingrese un numero natural: ");
scanf("%d",&nro);
while(nro>0)
{
    i++;
    if((nro%3)==0)
        sumatoria_3+=nro;
    if((nro%5)==0)
        cant_5++;
    if((i%2)==0)
        suma2+=nro;
        printf("Ingrese un numero natural: ");
scanf("%d",&nro);
}
printf("La sumatoria de los valores multiplos de 3: %d",sumatoria_3);
printf("\nLa cantidad de valores múltiplos de 5: %d",cant_5);
printf("\nLa sumatoria de los valores que se ingresan en orden par: %d\n\n",suma2);

}
