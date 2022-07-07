#include<stdio.h>
//Flavio Coulleri
typedef struct
{
    int codigoinmueble;
    int ubicaciongeografica;
    char tipoinmueble;
    int medidas;
    int ambientes;
    int antiguedad;
    float precio;
}INMUEBLE;
int leeyvalida(int,int,char[]);
float leemayor(int,char[]);
char leetipo();
void mayor(int[]);
void generararchivo(INMUEBLE[],int);
int busqueda(INMUEBLE[],int,int);
int main()
{   FILE*pf;
    pf=fopen("inmueble.dat","rb");
    INMUEBLE aux, vecinmueble[3000];
    int i=0,pos,registroaprobados=1,registrorechazados=0,codinmueble,operacion,vecambiente[10]={0},c,j;
    int ubicacion,cantambiente;
    char tipo;
    float porcentaje,preciomayor,preciomenor;
    fread(&aux,sizeof(INMUEBLE),1,pf);
    while(!feof(pf))
    {
        vecinmueble[i]=aux;
        i++;
        fread(&aux,sizeof(INMUEBLE),1,pf);
    }
    codinmueble=leeyvalida(999,15000,"Ingresar codigo de inmueble(999 a 15000): ");
    while(codinmueble!=999)
    {
        pos=busqueda(vecinmueble,codinmueble,i);
        if(pos!=-1)
        {   operacion=leeyvalida(1,2,"Ingresar codigo de operacion(1 o 2): ");
            if(operacion==1)
            {
                porcentaje=leemayor(0,"Ingresar incremento: ");
                vecinmueble[pos].precio+=vecinmueble[pos].precio*(porcentaje/100);
            }
            else
                {
                porcentaje=leemayor(0,"Ingresar decremento: ");
                vecinmueble[pos].precio-=vecinmueble[pos].precio*(porcentaje/100);
                vecinmueble[pos].antiguedad++;
                }
            registroaprobados++;
        }
        else
            registrorechazados++;
        codinmueble=leeyvalida(999,15000,"Ingresar codigo de inmueble(999 a 15000): ");
    }
    generararchivo(vecinmueble,i);
    printf("Porcentaje de registros rechazados: %.2f\n",(float)(registrorechazados*100/(registroaprobados+registrorechazados)));

    for(c=0;c<1;c++)
    {
        ubicacion=leeyvalida(1,200,"Ingresar ubicacion(1 a 200): ");
        tipo=leetipo();
        cantambiente=leeyvalida(1,10,"Ingresar cantidad de ambientes(1 a 10): ");
        preciomayor=leemayor(0,"Ingresar precio mayor: ");
        preciomenor=leemayor(0,"Ingresar precio menor: ");

        for(j=0;j<i;j++)
        {
            if((vecinmueble[j].ubicaciongeografica==ubicacion)&&(vecinmueble[j].tipoinmueble==tipo)
               &&(vecinmueble[j].ambientes==cantambiente&&(vecinmueble[j].precio>preciomenor&&vecinmueble[j].precio<preciomayor)))
                  printf("Codigo de inmueble|Metros 2|Antiguedad|Precio\n%18d|%8d|%10d|%.2f\n",vecinmueble[j].codigoinmueble,
                         vecinmueble[j].medidas,vecinmueble[j].antiguedad,vecinmueble[j].precio);
        }
        vecambiente[cantambiente]++;
    }
    mayor(vecambiente);
    fclose(pf);
}
int leeyvalida(int li,int ls,char variable[])
{
    int dato;
    printf("%s",variable);
    scanf("%d",&dato);
    while(dato<li||dato>ls)
    {
    printf("ERROR. %s",variable);
    scanf("%d",&dato);
    }
    return dato;
}
float leemayor(int li,char variable[])
{
    float dato;
    printf("%s",variable);
    scanf("%f",&dato);
    while(dato<li)
    {
    printf("ERROR. %s",variable);
    scanf("%f",&dato);
    }
    return dato;
}
void generararchivo(INMUEBLE doc2[],int j)
{
    FILE*pf;
    int i=0;
    pf=fopen("inmueble2.dat","wb");
    while(i<j)
    {
    fwrite(&doc2[i],sizeof(INMUEBLE),1,pf);
    i++;
    }
    fclose(pf);
}

char leetipo()
{
    char dato;
    printf("Ingresar tipo de inmueble(C,D,L,T,X,P): ");
    fflush(stdin);
    scanf("%c",&dato);
    while(dato!='C'&&dato!='D'&&dato!='L'&&dato!='T'&&dato!='X'&&dato!='P')
    {
    printf("ERROR. Ingresar tipo de inmueble(C,D,L,T,X,P): ");
    fflush(stdin);
    scanf("%c",&dato);
    }
    return dato;
}
void mayor(int vec[])
{
    int band=-1,aux,i,pos;
    for(i=0;i<10;i++)
    {
        if(band==-1||vec[i]>aux)
        {
            band=0;
            aux=vec[i];
            pos=i;
        }
    }
    printf("La cantidad de  ambientes mas solicitada fue %d",pos);
}
int busqueda(INMUEBLE doc[],int dato,int max)
{
    int i=0,pos=-1;
    while(i<max&&pos==-1)
    {
        if(doc[i].codigoinmueble==dato)
        {
            pos=i;
        }
        else i++;
    }
    return pos;
}
