#include <stdio.h>
int main()
{
    int i=0,arreglo[200],n;

    for(n=1; n<=400; n++)
    {
        if(n%2 != 0)
        {  
            arreglo[i]=n;
            printf("arreglo[%d] = %d\n",i,n);
            i++;
        }    
    }
    return 0;
}