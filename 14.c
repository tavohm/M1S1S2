#include <stdio.h>

int main()
{
    char tablero1[9] = {'T', 'C', 'A', 'R', 'M', 'A', 'C', 'T', 'P'};
  
    for (int i = 0; i < 8; i++)
    {
        printf(" %c ", tablero1[i]);
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        printf(" %c ", tablero1[8]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
    }

    for (int i = 0; i < 8; i++)
    {
        printf(" %c ", tablero1[8]);
    }
    printf("\n");

    for (int i = 7; i > -1; i--)
    {
        printf(" %c ", tablero1[i]);
    }
    printf("\n");
    
    return 0;
}