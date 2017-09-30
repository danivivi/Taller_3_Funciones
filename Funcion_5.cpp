#include <stdio.h>
/*Comentario
Funcion que devuelve el valor maximo de tres argumentos.
Fecha:20-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int maximo(int a, int b, int c);
 
int main()
{
	int num1,num2,num3;
	
	printf("Ingrese tres numeros: \n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	printf("El Mayor de los tres numeros es: %d\n",maximo(num1,num2,num3));
	return 0;
}
int maximo(int a, int b, int c)
{
	int mayor;
	
	if(a>b && a>c)
	{
		mayor=a;
	}
	if(b>a && b>c)
	{
		mayor=b;
	}
	if(c>a && c>b)
	{
		mayor=c;
	}
	
	return mayor;
}

