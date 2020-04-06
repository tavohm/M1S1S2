/* Programa de ejemplo INCREMENTO y DECREMENTO
   de una VARIABLE 
*/

#include <stdio.h>

int main(){
   int a,b;

   printf("\nINCREMENTO:");
   a = 0;
   while(a<=10) //INCREMENTO, AVANZAR
   {
      printf("%d ",a);
      a = a + 1;
   }

   printf("\nDECREMENTO:");
   for( b=10; b>=0; b=b-2)
   {
      printf("%d ",b);
   }

   return 0;
}
