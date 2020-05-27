#include <stdio.h>

int main()
{
    float arreglo[10];
    int i;
    for(i=0; i<10; i++)
    {
        printf("Dime un valor [%d]: ",i);
        scanf("%f",&arreglo[i]);
        printf("arreglo[%d] = %.2f --> (+0.3) %.2f\n",i,arreglo[i],arreglo[i]+0.3);
    }
    return 0;
}