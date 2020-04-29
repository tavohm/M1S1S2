#include <stdio.h>

int main(){

    // declaramos las variables necesarias.
    int fila,columna,arreglo[4][4];

    //hacemos un ciclo para llenar el arreglo
    for(fila=0; fila<4; fila++){
        for(columna=0; columna<4; columna++){
            printf("arreglo[%d][%d]:",fila,columna);
            scanf("%d",&arreglo[fila][columna]);
        }
    }

    //mostrar el arreglo en pantalla
    for (fila = 0; fila < 4; fila++){
        for (columna = 0; columna < 4; columna++){
            printf("arreglo[%d][%d]=[%d]\t",fila,columna,arreglo[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}