/*De una persona se conoce los siguientes datos:
• Número de Legajo (int, entre 1 y 10.000)
• Apellido (string, 15 caracteres)
• Nombre (string, 15 caracteres)
• Altura (float, mayor de 0)
• Sexo (char, F o M)
• Día de Nacimiento (int, entre 1 y 31
• Mes de Nacimiento (int, ente 1 y 12)
• Año de Nacimiento (int, ente 1950 y 2019)
Se solicita realizar los siguientes procesos:
a. Con datos ingresados por teclado: Crear una Estructura de Datos con los datos enunciados
anteriormente y llamarla PERSONA.
b. Mostrar los datos de la Estructura de Datos del punto a.
c. Con datos ingresados por teclado: Modificar la Estructura de Datos del punto a., crear una Estructura
de Datos que contenga Nombre y Apellido y otra Estructura de Datos que contenga Día/Mes/Año
utilizarla en una nueva Estructurad de Datos llamada PERSONA2.
d. Mostrar los datos de la Estructura de Datos del punto c.
e. Crear una FUNCION que cargue los datos de la Estructurad de Datos del punto c y que retorne los datos
al programa principal (main).
f. Con datos ingresados por teclado: Modificar la Estructurad de Datos llamada PERSONA2 del punto c.
y agregarle un campo/miembro que contenga los códigos de las Materias Aprobadas (pueden llegar a
ser hasta 36 materias) y llamarla PERSONA3.
g. Crear una FUNCION que realice el punto f.
h. Mostrar los datos de la Lista creada en el punto f.
i. Crear una FUNCION que realice el punto h.*/
#include<stdio.h>
#include<string.h>
typedef struct
{
    int legajo;
    char apellido[16];
    char nombre[16];
    float altura;
    char sexo;
    int dia;
    int mes;
    int anio;
}PERSONA;
typedef struct
{
    char apellido[16];
    char nombre[16];
}AP;
typedef struct
{
    int dia;
    int mes;
    int anio;
}FECHA;
typedef struct
{
    AP nombrecompleto;
    FECHA fec;
}PERSONA2;
typedef struct
{
    PERSONA2 per3;
    int materia[36];
}PERSONA3;
////////////////////
int lyv(int,int,char[]);
char sexo();
float leemayor(int);
PERSONA2 carga();
PERSONA3 carga2();
void mostrar(PERSONA3);
main()
{   int i,j;
    PERSONA persona1;
    PERSONA2 per2;
    PERSONA3 pers3;
    persona1.legajo=lyv(1,10000,"legajo");
    printf("Ingresar nombre: ");
    fflush(stdin);
    gets(persona1.nombre);
    printf("Ingresar apellido: ");
    fflush(stdin);
    gets(persona1.apellido);
    persona1.altura=leemayor(0);
    persona1.sexo=sexo();
    persona1.dia=lyv(1,31,"dia");
    persona1.mes=lyv(1,12,"mes");
    persona1.anio=lyv(1950,2019,"anio");
    puts("Persona 1:");
    printf("Legajo: %d\nNombre completo: %s %s\nAltura: %.2f\nSexo: %c\nFecha: %d/%d/%d\n",persona1.legajo,persona1.nombre,persona1.
           apellido,persona1.altura,persona1.sexo,persona1.dia,persona1.mes,persona1.anio);
    per2=carga();
    puts("Persona 2:");
    printf("Nombre completo: %s %s\nFecha: %d/%d/%d\n",per2.nombrecompleto.nombre,per2.nombrecompleto.apellido,per2.fec.dia,
           per2.fec.mes,per2.fec.anio);
    pers3=carga2();
    mostrar(pers3);

}
int lyv(int li, int ls, char variable[])
{
    int dato;
    printf("Ingresar %s: ",variable);
    scanf("%d",&dato);
    while(dato<li||dato>ls)
    {
    printf("ERROR. Ingresar %s: ",variable);
    scanf("%d",&dato);
    }
    return dato;
}
float leemayor(int li)
{
    float dato;
    printf("Ingresar altura: ");
    scanf("%f",&dato);
    while(dato<li)
    {
    printf("ERROR. Ingresar altura: ");
    scanf("%f",&dato);
    }
    return dato;
}
char sexo()
{
    char dato;
    printf("Ingresar sexo: ");
    fflush(stdin);
    scanf("%c",&dato);
    while(dato!='M'&&dato!='F')
    {
    printf("ERROR. Ingresar sexo: ");
    fflush(stdin);
    scanf("%c",&dato);
    }
    return dato;
}
PERSONA2 carga()
{
    PERSONA2 per;
    printf("Ingresar nombre: ");
    fflush(stdin);
    gets(per.nombrecompleto.nombre);
    fflush(stdin);
    printf("Ingresar apellido: ");
    gets(per.nombrecompleto.apellido);
    per.fec.dia=lyv(1,31,"dia");
    per.fec.mes=lyv(1,12,"mes");
    per.fec.anio=lyv(1950,2019,"anio");
    return per;
}
PERSONA3 carga2()
{
    PERSONA3 per;
    int i,dato=-1;
    printf("Ingresar nombre: ");
    fflush(stdin);
    gets(per.per3.nombrecompleto.nombre);
    fflush(stdin);
    printf("Ingresar apellido: ");
    gets(per.per3.nombrecompleto.apellido);
    per.per3.fec.dia=lyv(1,31,"dia");
    per.per3.fec.mes=lyv(1,12,"mes");
    per.per3.fec.anio=lyv(1950,2019,"anio");
    for(i=0;i<36;i++)
    {
        per.materia[i]=0;
    }
    i=0;
    while(i<36&&dato!=0)
    {
        dato=lyv(0,4000,"codigo de materia(entre 1 y 4000, 0 para finalizar)");
        per.materia[i]=dato;
        i++;
    }
    return per;
}
void mostrar(PERSONA3 per)
{   int i;
    puts("Persona 3:");
    printf("Nombre completo: %s %s\nFecha: %d/%d/%d\n",per.per3.nombrecompleto.nombre,per.per3.nombrecompleto.apellido,
           per.per3.fec.dia,per.per3.fec.mes,per.per3.fec.anio);
    puts("Materias aprobadas: ");
    for(i=0;i<36;i++)
    {   if(per.materia[i]>0)
        printf("%4d | ",per.materia[i]);
    }
}
