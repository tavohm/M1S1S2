#include <stdio.h>
int main()
{
    int n, p, p1;
    printf("Dime un numero: ");
    scanf("%d", &n);
    p = n % 2;
    p1 = n % n;
    if (p == 0 && p1 == 0)
    {
        printf("No es Primo");
    }
    else
    {
        printf("Es primo");
    }
    return 0;
}