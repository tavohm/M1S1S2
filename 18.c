#include <stdio.h>

int main()
{
    int a[5],i,n,valor=0;

    for(i=0; i<5; i++)
    {
        printf("Valor %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("Que numero quieres buscar: ");
    scanf("%d",&n);

    for(i=0; i<5; i++)
    {
        if(n == a[i])
        {
            valor = 1;
            break;
        }
        else
            valor = 0;
    }

    if(valor == 1)
        printf("El numero si existe en el arreglo\n");
    else
        printf("El numero no existe en el arreglo\n");

    return 0;
}