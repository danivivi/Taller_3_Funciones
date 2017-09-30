#include <stdio.h>
/*Comentario
Funcion que dada una matriz y un numero de fila de la matriz, devuelve el menor
de los elementos almacenados de dicha fila.
Fecha:24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

void llenando_matriz(int matriz[100][100], int filas, int columnas);
int matriz[100][100],filas,columnas;
int main()
{
	llenando_matriz(matriz,filas,columnas);
	return 0;
}

void llenando_matriz(int matriz[100][100], int filas, int columnas)
{
	int numfila;
	int menor;
	printf("Ingrese numero de filas:\n ");
	scanf("%d",&filas);
	printf("Ingrese numero de Columnas:\n");
	scanf("%d",&columnas);
	
	printf("Ingrese elementos de la matriz:\n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}

	printf("Mostrando Matriz\n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Ingrese el numero de la fila:\n");
	scanf("%d",&numfila);
	int numerofila=numfila-1;
	menor=matriz[numerofila][0];
	
	for(int j=0;j<columnas;j++)
	{
		if (matriz[numerofila][j]<menor)
		{
			menor=matriz[numerofila][j];			
		}
	}
	printf("El numero menor de la fila es: %d\n",menor);	
}
