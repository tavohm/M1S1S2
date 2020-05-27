#include <stdio.h>

int main()
{
    int a[5], i, mayor=0,menor=0;

    for (i = 0; i < 5; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", &a[i]);
        if(mayor<=a[i])
        {
            mayor=a[i];
        }
        else
        {
        
        }
        
    }

    printf("Mayor: %d\n",mayor);
    printf("Menor: %d\n",menor);

    return 0;
}