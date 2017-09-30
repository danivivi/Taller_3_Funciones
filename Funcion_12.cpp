#include <stdio.h>
/*Comentario
Funcion que toma como parametro un vector de numeros y su tamaño y cambie el 
signo de los elementos del vector.
Fecha:24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

void llenar_vector();
void cambio_signo(int vec[], int tam);
void mostrar_vector(int vec[],int tam);
int vec[100],tam;

int main()
{
	llenar_vector();
	cambio_signo(vec,tam);
	mostrar_vector(vec,tam);
	return 0;
}

void llenar_vector()
{
	printf("Ingrese tamaño del vector:\n");
	scanf("%d",&tam);
	
	printf("Ingrese elementos del vector\n");	
	for (int i=0;i<tam;i++)
	{
		scanf("%d",&vec[i]);		
	}	
}

void cambio_signo(int vec[], int tam)
{
	for(int i=0;i<tam;i++){
	   vec[i]*=-1;
	}	
}

void mostrar_vector(int vec[],int tam){
	
	printf("Elementos de Vector con signo cambiado\n");	
	for(int i=0;i<tam;i++){
		printf("%d\n",vec[i]);
	}
}
