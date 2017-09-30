#include <stdio.h>
/*Comentario
Funcion que intercambia el valor de 2 variables utilizando paso de
parametros por referencia.
Fecha:20-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int cambio(int &a, int &b);	

int main() 
{
	int num1;
	int num2;
	printf("Ingrese dos valores:\n");
	scanf("%d",&num1);
	scanf("%d",&num2);

	cambio(num1,num2);
	
	printf("Mostrando valores por referencia:\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
	return 0;
}

int cambio(int &a, int &b)
{
	a=10;
	b=20;
	return a,b;
}
