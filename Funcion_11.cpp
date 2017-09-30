#include <stdio.h>
/*Comentario
Funcion que toma como parametros un vector y su tamaño y diga si el vector esta
ordenado crecientemente.
Fecha:24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

void pedir_datos();
int orden_vec(int vec[],int tam);
int vec[100],tam;

int main() 
{
	pedir_datos();
	orden_vec(vec,tam);
	return 0;
}

void pedir_datos()
{
	printf("Ingrese Longitud del Vector:\n");
	scanf("%d",&tam);
	
	printf("Ingrese elementos del Vector:\n");
	for (int i=0;i<tam;i++)
	{
		scanf("%d",&vec[i]);
	}
}

int orden_vec(int vec[],int tam)
{	
	bool verdad;
	for(int i=0;i<tam;i++)
	{
		if (vec[i]>vec[i+1])
		{
			verdad=true;
			vec++;
		}else{
			verdad=false;
		}		
	}
	if(verdad==true)
	{
		printf("Vector en orden crecientemente\n");
	}
	if(verdad==false)
	{			
		printf("Vector NO esta en orden crecientemente\n");
	}
}
