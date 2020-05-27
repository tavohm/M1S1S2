#include <stdio.h>

int main()
{
    int arreglo[5],i;

    for(i=0; i<5; i++)
    {
        printf("arreglo[%d]: ",i);
        scanf("%d",&arreglo[i]);
        if(i%2==0)
        {
            arreglo[i] = arreglo[i]-1;
        }
        else
        {
            arreglo[i] = arreglo[i]+1;
        }
        printf("arreglo[%d] = %d\n",i,arreglo[i]);
    }
    return 0;
}