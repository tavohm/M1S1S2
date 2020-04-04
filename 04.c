/* Programa de ejemplo INCREMENTO y DECREMENTO
   de una VARIABLE 
*/

#include <stdio.h>

int main(){
   int a,b,c;

   printf("Ciclo FOR\n");
   for (a = 0; a < 11; a = a + 1) // INCREMENTO
   {
      printf("%d ",a);
   }

   printf("\n\nCiclo WHILE\n");
   b=0;
   while(b<=50)
   {
      printf("%d ",b);
      b = b + 3; // INCREMENTO
   }

   printf("\n\nCiclo DO WHILE\n");
   c = 0;
   do{
      printf("%d ",c);
      c = c + 4; // INCREMENTO
   }while(c<=30);

   return 0;
}
