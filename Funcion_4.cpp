#include <stdio.h>
/*Comentario
Funcion que devuelve la parte fraccionaria de cualquier numero introducido
por el usuario.
Fecha:20-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

float parte_frac(float num);

int main()
{
	float num;
	
	printf("Ingrese un numero:\n");
	scanf("%f",&num);

	printf("La parte fraccionaria es: %.3f\n",	parte_frac(num));
	
	return 0;
}
float parte_frac(float num)
{
	float fraccion;
	int entero;
	
	entero=num;
	fraccion=num-entero;	
	
return fraccion;	
}
