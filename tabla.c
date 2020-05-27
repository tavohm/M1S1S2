#include <stdio.h>
int main (){
	int n,t,n1;
	printf("Dime el numero del que quieras la tabla: ");
	scanf("%d",&n);
	for(n1=1;n1<11;n1++){
	t=n*n1;
	printf("%d x %d = %d \n",n1,n,t);	
	}
return 0;
}