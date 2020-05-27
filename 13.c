#include <stdio.h>

int main(){

	char letra,arreglo[10];
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("Letra en arreglo[%d]: ",i);
		scanf("%s",&arreglo[i]);
	}
	
	printf("Que letra quieres buscar: ");
	scanf("%s",&letra);
	
	
	for(i=0; i<10; i++)
	{
		if(letra == arreglo[i])
		{
			printf("Letra en posicion %d\n",i);
		}
		else
		{
			printf("Letra no encontrada!\n");
		}
		//printf("%c\n",arreglo[i]);
	}
    return 0;
}

