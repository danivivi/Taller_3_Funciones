#include <stdio.h>
/*Comentario
Funcion que toma como parametros un vector de enteros y su tamaño e imprime 
un vector con los elementos impares del vector recibido.
Fecha:24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

void llenando_vector();
void elementos_impares(int vec[],int vec2[], int longitud);
int vec[100],vec2[100],longitud;
int main()
{
	llenando_vector();
	elementos_impares(vec,vec2,longitud);
	return 0;
}

void llenando_vector()
{
	printf("Ingrese tamaño del vector:\n");
	scanf("%d",&longitud);
	printf("Ingrese elementos del vector:\n");
	
	for(int i=0;i<longitud;i++)
	{
		scanf("%d",&vec[i]);		
	}	
}

void elementos_impares(int vec[],int vec2[], int longitud)
{
	printf("Los elementos impares del vector son:\n");
	for(int i=0;i<longitud;i++)
	{
		if(vec[i]%2==1)
		{
			vec2[i]=vec[i];
		}
		if(vec2[i]!=0)
		{
			printf("%d\n",vec2[i]);
		}		
	}	
}

