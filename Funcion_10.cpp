#include <stdio.h>

/*Comentario
Funcion que toma como parametros un vector de numeros enteros y devuelve la suma 
de sus elementos.
Fecha:24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int sumatoria(int vec[],int longitud);
void pedir_datos();
int vec[100],longitud;
int main()
{	
	
	pedir_datos();
	printf("La suma de los elementos del Vector es ==>%d\n",sumatoria(vec,longitud));	
	return 0;
}

void pedir_datos()
{
	printf("Ingrese Longitud del Vector:\n");
	scanf("%d",&longitud);
	
	printf("Ingrese elementos del Vector:\n");
	for (int i=0;i<longitud;i++)
	{
		scanf("%d",&vec[i]);
	}
}

int sumatoria(int vec[],int longitud)
{
	int suma;
	suma=0;
	for(int i=0;i<longitud;i++)
	{
		suma+=vec[i];
	}	
	return suma;
}
