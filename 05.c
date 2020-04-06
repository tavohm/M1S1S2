#include <stdio.h>
int main(){
    int opcion;
    printf("1) suma.\n");
    printf("2) resta.\n");
    printf("3) multiplicacion.\n");
    printf("4) SALIR.\n");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1: printf("Elegiste suma"); break;
        case 2: printf("Elegiste resta"); break;
        case 3: printf("MULTI"); break;
        case 4: printf("SALIR"); break;
        default: printf("Error, opcion no valida!"); break;
    }
    return 0;
}
