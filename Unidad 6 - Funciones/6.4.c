#include<stdio.h>
int RESTO(int,int);
int EsPrimo(int);
int EsPar(int);
int Promedio(int,int);

main()
{
    int num,espar=0,esprimo=0,noespar=0,contador=0,ban=0;
    do{
                do{
            printf("Ingresa un numero: ");
            scanf("%d",&num);
            contador++;

            if(EsPar(num)==1)
                {espar++;}
                else
                {noespar++;}
            if(EsPrimo(num)==1)
                {esprimo++;}

            }while((num>=1&&num<=50)&&num!=-10);
            if(num<1||num>50)
                printf("Numero fuera del rango.\n");
        }while(num!=-10);
        system("cls");
    printf("Cantidad de numeros primos: %d\n",esprimo);
    printf("Cantidad de numeros pares: %d\n",espar);
    printf("Promedio de los numeros impares: %d\n",Promedio(noespar,contador));
}
int RESTO(int dividendo,int divisor)
{
    int resto;
    resto=dividendo%divisor;
    return(resto);
}
int EsPar(int num)
{
    if(RESTO(num,2)==0)
        return(1);
    else
        return(0);
}
int EsPrimo(int numero) {
  if (numero == 0 || numero == 1) return 0;
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++)
  {
    if (RESTO(numero,x) == 0) return 0;
  }

  return 1;
}
int Promedio(int suma,int contador)
{
    if(contador>0)
    {
        return((suma/contador)*100);
    }
    return(0);
}
