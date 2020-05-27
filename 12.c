#include <stdio.h>
int main() {
    // declaramos un arreglo de tipo entero
    // con 5 elementos, [0][1][2][3][4] llamado "arreglo"
    int i,arreglo[5];
    // pedimos 5 números y vamos guardando cada
    // uno en una posición del arreglo.
    for (i=0; i<5; i++){
        printf("Escribe un valor a guardar: ");
        scanf("%d",&arreglo[i]);
    }
    printf("Arreglo en forma ascendente: \n");
    // mostramos el contenido del arreglo
    // del primer al ultimo elemento
    for(i=0; i<5; i++){
        printf("arreglo[%d] = %d\n",i,arreglo[i]);
    }
    printf("Arreglo en forma descendente: \n");
    // mostramos el contenido del arreglo
    // del ultimo al primer elemento
    for(i=4; i>=0; i--){
        printf("arreglo[%d] = %d\n",i,arreglo[i]);
    }
    return 0;
}
