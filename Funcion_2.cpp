#include <stdio.h>
/*Comentario
Programa que calcula el cuadrado del valor que se le transmite y despliega 
el resultado.
Fecha:20-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

float al_cuadrado(float num);

int main() 
{
	float num;
	printf("Ingrese un numero para saber su cuadrado:\n");
	scanf("%f",&num);
	
	printf("El cuadrado del numero es: %.3f\n",al_cuadrado(num));	
	return 0;
}

float al_cuadrado(float num)
{
	float resultado;
	resultado=num*num;
	return resultado;
}

