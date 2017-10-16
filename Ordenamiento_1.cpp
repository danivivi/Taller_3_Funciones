#include <stdio.h>
/*Comentario
Metodo de ordenamiento:
1:Burbuja
Fecha: 14 octubre 2017
Elaborado por: Viviana Rojas Ruiz*/

void Burbuja ( int vector[], int tam, int aux);
int vector[100],tam,aux;
int main()
{	
	Burbuja (vector,tam,aux);
	return 0;
}

void Burbuja ( int vector[], int tam, int aux)
{
	printf("Ingrese Longitud del vector:\n");
	scanf("%d",&tam);
	
	printf("Ingrese elementos del vector:\n");
	
	for (int i=0;i<tam;i++)
	{
		scanf("%d",&vector[i]);
	}
	
	printf("Elementos del vector ordenados:\n");
	
	for (int i=0;i<tam;i++)
	{
		for (int j=0;j<tam;j++)
		{
			if (vector[j]>vector[j+1])
			{
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;				
			}
		}
	}
	for(int i=1;i<=tam;i++)
	{
		printf("%d\n",vector[i]);
	}
}

