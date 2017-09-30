#include <stdio.h>
/*Comentario
Funcion que eleva un numero entero que se le trasmite a una potencia de numero
entero positivo y despliega el resultado.El numro entero positivo debe ser
trasmitido tambien por el usuario.
Fecha:20-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int funpot(int num, int pot);

int main() 
{
	int num;
	int pot;
	funpot(num,pot);
	return 0;
}

int funpot(int num, int pot)
{
	int potencia,i;
	potencia=1;
	printf("Ingrese un numero:\n");
	scanf("%d",&num);
	printf("Ingrese un numero entero positivo para potencia:\n");
	scanf("%d",&pot);
	
	for(i=1;i<=pot;i++)
	{
		potencia*=num;
	}
	printf("El resultado de la potencia es:%d\n",potencia);
	return potencia;
}
