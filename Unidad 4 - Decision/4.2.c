//Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
//los otros dos.
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Ingresa el primer numero: ");
    scanf("%d",&n1);
    printf("Ingresa el primer numero: ");
    scanf("%d",&n2);
    printf("Ingresa el primer numero: ");
    scanf("%d",&n3);

    if(n1<n2&&n1<n3)
    {
        printf("Si, el primer numero es menor que los otros dos.");
    }
    else
        printf("No, el primer numero no es menor que los otros dos.");
    return 0;
}
