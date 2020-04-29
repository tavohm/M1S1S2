#include <stdio.h>

int main() {

    // declaramos las variables necesarias
    int i,num,arreglo[5];

    //creamos un ciclo para leer los datos
    for(i=0; i<5; i++){
        printf("Valor [%d]: ",i);
        scanf("%d",&arreglo[i]);
    }

    //creamos un ciclo para mostrar el contenido del arreglo
    for(i=4; i>=0; i--){
        printf("arreglo[%d]=%d\n",i,arreglo[i]);
    }

    return 0;
}