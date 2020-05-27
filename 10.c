//Ejercicio demostrativo de funciones en C, función para sumar dos números enteros

void suma(int, int); //protipo de la función, no regresa valores

#include <stdio.h>
//#include "10.h"

int main(){

    int a,b;
    
    printf("Dime el primer valor: ");
    scanf("%d",&a);
    printf("Dime el segundo valor: ");
    scanf("%d",&b);

    suma(a,b);
    //printf("\nUsando la funcion resta de la libreria: %d",resta(a,b));
    return 0;
}


void suma(int F, int G){
    printf("Suma: %d + %d = %d",F,G,F+G);
}
