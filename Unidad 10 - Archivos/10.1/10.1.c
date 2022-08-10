#include<stdio.h>
#include<string.h>
typedef struct{
int dni;
char nombrecompleto[81];
int nota1,nota2;
float promedio;
}ALUMNO;
void LECTURA();
main()
{
    ALUMNO aux;
    FILE*pf;
    pf=fopen("ALUMNOS.dat","wb");
    printf("Ingresar dni del alumno: ");
    scanf("%d",&aux.dni);
    while(aux.dni!=0)
    {
    printf("Ingresar nombre del alumno: ");
    fflush(stdin);
    gets(aux.nombrecompleto);
    fflush(stdin);
    printf("Ingresar nota 1 del alumno: ");
    scanf("%d",&aux.nota1);
    printf("Ingresar nota 2 del alumno: ");
    scanf("%d",&aux.nota2);
    aux.promedio=((float)aux.nota1+aux.nota2)/2;
    fwrite(&aux,sizeof(ALUMNO),1,pf);
    printf("Ingresar dni del alumno: ");
    scanf("%d",&aux.dni);
    }
    fclose(pf);
    system("cls");
    LECTURA();
}
void LECTURA()
{
    FILE*pf;
    pf=fopen("ALUMNOS.DAT","rb");
    ALUMNO aux;
    printf("DNI      |Nombre               |Nota 1|Nota 2|Promedio\n");
    fread(&aux,sizeof(ALUMNO),1,pf);
    while(!feof(pf))
    {
        printf("%-9d|%-21s|%-6d|%-6d|%-.2f\n",aux.dni,aux.nombrecompleto,aux.nota1,aux.nota2,aux.promedio);
        fread(&aux,sizeof(ALUMNO),1,pf);
    }
    fclose(pf);
}
