#include <stdio.h>
/*Comentario
Funcion que acepta dos numeros en punto flotante como parametro, multiplica 
estos dos numeros y despliega el resultado.
Fecha: 19-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

float mult(float num1, float num2);

int main() 
{
	float num;
	float num2;
	
	printf("Ingrese dos numeros para multiplicar\n");
	scanf("%f",&num);
	scanf("%f",&num2);
	printf("El resultado es %f\n",mult(num,num2));
	
	return 0;
}

float mult(float num1, float num2)
{
	float resul;
	resul=num1*num2;	
	return resul;
}
