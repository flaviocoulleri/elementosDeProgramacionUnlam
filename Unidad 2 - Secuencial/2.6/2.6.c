#include<stdio.h>
main()
{
    float turistaprecio=8800,primeraprecio=8800+8800*0.3;
    int turista,primera;
    printf("Ingrese los pasajes en turista: ");
    scanf("%d",&turista);
    printf("Ingrese los pasajes en primera: ");
    scanf("%d",&primera);
    printf("Recaudacion total del vuelo: $%.2f",turista*turistaprecio+
           primera*primeraprecio);
}
