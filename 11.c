#include <stdio.h>
int main() {
    // declaramos las variables necesarias y un arreglo
    // bidimensional de 4x4 elementos de tipo entero.
    int fila,columna,numero,arreglo[4][4];
    // pedimos números que guardamos en el arreglo
    for(fila=0; fila<4; fila++){ // con este ciclo recorremos las filas
        for(columna=0; columna<4; columna++){ // con este ciclo recorremos
                                              // las columnas.
            printf("Escribe un numero para la posicion [%d][%d]: ",fila,columna);
            scanf("%d", &numero);
            arreglo[fila][columna] = numero;
        }
    }
    // mostramos el contenido del arreglo en pantalla.
    printf("\nContenido del arreglo[4][4]:\n");
    for(fila=0; fila<4; fila++){
        for(columna=0; columna<4;columna++){
            printf("[%d][%d]=[%d]\t",fila,columna,arreglo[fila][columna]);
        }
        printf("\n"); // con esta sentencia hacemos un salto de línea cuando
                      // se termina de imprimir una fila.
    }
    return 0;
}
