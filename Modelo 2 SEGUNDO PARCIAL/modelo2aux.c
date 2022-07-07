#include<stdio.h>
#include<string.h>
//Declaracion de estructuras
typedef struct
{
    int cod;
    int ubicacion;
    char tipo;
    int medidas;
    int ambientes;
    int antiguedad;
    float precio;
}INMUEBLE;
main()
{
    FILE*pf;
    INMUEBLE aux;
    int i;
    pf=fopen("inmueble.dat","wb");
    for(i=0;i<3;i++)
    {
        printf("Ingresar codigo de inmueble: ");
        scanf("%d",&aux.cod);
        printf("Ingresar ubicacion geografica: ");
        scanf("%d",&aux.ubicacion);
        printf("Ingresar tipo inmueble: ");
        fflush(stdin);
        scanf("%c",&aux.tipo);
        printf("Ingresar medidas: ");
        scanf("%d",&aux.medidas);
        printf("Ingresar ambientes: ");
        scanf("%d",&aux.ambientes);
        printf("Ingresar antiguedad: ");
        scanf("%d",&aux.antiguedad);
        printf("Ingresar precio: ");
        scanf("%f",&aux.precio);
        fwrite(&aux,sizeof(INMUEBLE),1,pf);
    }
    fclose(pf);
}














