#include <stdio.h>
/*Comentario 
Funcion que determina si una funcion es simetrica o no;
Fecha:24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/


void matriz_simetrica(int matriz[100][100],int filas, int columnas);

int main() 
{
	int matriz[100][100],filas,columnas;
	matriz_simetrica(matriz,filas,columnas);
	return 0;
}

void matriz_simetrica(int matriz[100][100],int filas, int columnas)
{
	int r;
	printf("Ingrese numero de filas:\n");
	scanf("%d",&filas);
	printf("Ingrese numero de columnas:\n");
	scanf("%d",&columnas);
	
	printf("Ingrese elementos de la matriz:\n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			scanf("%d",&matriz[i][j]);
		}		
	}	
	if(filas==columnas)
	{
		for (int i=0;i<filas;i++)
		{
			for (int j=0;j<columnas;j++)
			{				
				if(matriz[i][j]==matriz[j][i])
				{
					r=1;
				}	
			}	
		}
	}
	
	if (r==1)
	{
		printf("Matriz es Simetrica");		
	}else{
		printf("Matriz NO es Simetrica");
	}	
}
