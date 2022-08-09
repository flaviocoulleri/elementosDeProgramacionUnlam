#include<stdio.h>
#include<string.h>
typedef struct{
int dni;
char nombrecompleto[81];
int nota1,nota2;
float promedio;
}ALUMNO;
void LECTURA(FILE);
main()
{   int cant=0;
    FILE*pf,*pf2,*pf3,*pf4;
    ALUMNO aux;
    pf=fopen("ALUMNOS.DAT","rb");
    pf2=fopen("PROMOCIONADOS.DAT","wb");
    pf3=fopen("CURSADO.DAT","wb");
    pf4=fopen("REPROBADOS.DAT","wb");
    fread(&aux,sizeof(ALUMNO),1,pf);
    while(!feof(pf))
    {
        if(aux.nota1>=7&&aux.nota2>=7)
            fwrite(&aux,sizeof(ALUMNO),1,pf2);
        if(aux.nota1>=4&&aux.nota2>=4)
            fwrite(&aux,sizeof(ALUMNO),1,pf3);
        else
            fwrite(&aux,sizeof(ALUMNO),1,pf4);
        fread(&aux,sizeof(ALUMNO),1,pf);
    }
    LECTURA(*pf);
    fclose(pf);
    fclose(pf2);
    fclose(pf3);
    fclose(pf4);
}
void LECTURA(FILE *pf)
{   ALUMNO aux;
    printf("DNI      |Nombre               |Nota 1|Nota 2|Promedio\n");
    fread(&aux,sizeof(ALUMNO),1,pf);
    while(!feof(pf))
    {
        printf("%-9d|%-21s|%-6d|%-6d|%-.2f\n",aux.dni,aux.nombrecompleto,aux.nota1,aux.nota2,aux.promedio);
        fread(&aux,sizeof(ALUMNO),1,pf);
    }

}
