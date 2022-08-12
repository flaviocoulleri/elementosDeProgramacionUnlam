#include<stdio.h>
int validar(int,int,int);
int validarpositivo(int);
main()
{   int dia,mes,anio,cantescuelas, i,cantalumnos,nroescuela,dni,diaalumno,mesalumno,anioalumno;
    char especialidad,sexo,opinion;
    printf("Ingresar dia: ");
    scanf("%d",&dia);
    dia=validar(dia,1,31);
    printf("Ingresar mes: ");
    scanf("%d",&mes);
    mes=validar(mes,1,12);
    printf("Ingresar anio: ");
    scanf("%d",&anio);
    anio=validar(anio,2004,2022);
    printf("Ingresar la cantidad de colegios en la que se realizo la encuesta: ");
    scanf("%d",&cantescuelas);
    cantescuelas=validarpositivo(cantescuelas);

    for(i=1;i<cantescuelas;i++)
    {
        printf("Ingresar el nro de escuela: ");
        scanf("%d",&nroescuela);
        printf("Ingrese la cantidad de alumnos incriptos: ");
        scanf("%d",&cantalumnos);
        do{
        printf("Ingrese la especialidad: ");
        getch();
        scanf("%c",&especialidad);
        while(especialidad!='t'||especialidad!='n');
        printf("Ingrese el dni del alumno que realizo la encuesta: ");
        scanf("%d",&dni);
        while(dni!=0)
        {
            printf("Ingresar dia: ");
            scanf("%d",&diaalumno);
            diaalumno=validar(diaalumno,1,31);
            printf("Ingresar mes: ");
            scanf("%d",&mesalumno);
            mesalumno=validar(mesalumno,1,12);
            printf("Ingresar anio: ");
            scanf("%d",&anioalumno);
            anioalumno=validar(anioalumno,2004,2022);
            do{printf("Ingresar sexo: ");
            getch();
            scanf("%c",&sexo);
            }while(sexo!='f'||sexo!='m');
            do{printf("Ingresar opinion: ");
            getch();
            scanf("%c",&opinion);
            }while(opinion!='b'||opinion!='m');

        printf("Ingrese el dni del alumno que realizo la encuesta: ");
        scanf("%d",&dni);
        }



    }





}
}
int validar(int fecha,int min,int max)
{
    if(fecha<=min||fecha>=max)
    {
        printf("Ingrese nuevamente: ");
        scanf("%d",&fecha);
    }
    return(fecha);
}
int validarpositivo(int numero)
{
    if(numero<=0)
    {
        printf("Ingrese nuevamente: ");
        scanf("%d",&numero);
    }
    return(numero);
}
