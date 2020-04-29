#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i; //variable usada para un ciclo
    srand(time(NULL)); //generamos una semilla diferente en cada 
                    //ejecución del programa.

    for(i=0; i<10; i++){
        printf("%d\n",rand());
    }
    return 0;
}