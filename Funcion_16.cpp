#include <stdio.h>
/*Comentario
Funcion que devuelve la fecha mas reciente de cualquier par de fechas que se le
transmitan.
Fecha:24-Septiembre-2017
Elaborado por:Viviana Rojas Ruiz*/

void mayor(int dia,int mes, int num,int dia2, int mes2, int num2);

int main()
{
	int dia, mes, num,dia2, mes2, num2;
	mayor(dia,mes,num,dia2,mes2,num2);
	return 0;
}

void mayor(int dia,int mes, int num,int dia2, int mes2, int num2)
{
	printf("Ingrese primera fecha:\n");
	printf("Ingrese dia:\n");
	scanf("%d",&dia);
	printf("Ingrese mes:\n");
	scanf("%d",&mes);
	printf("Ingrese año:\n");
	scanf("%d",&num);
	
	printf("Ingrese segunda fecha:\n");
	printf("Ingrese dia:\n");
	scanf("%d",&dia2);
	printf("Ingrese mes:\n");
	scanf("%d",&mes2);
	printf("Ingrese año:\n");
	scanf("%d",&num2);
	
	printf("La Mayor de las Fechas es:");
	if (num>num2)
	{
		printf("%d / %d / %d\n",dia,mes,num);
	}else{
		printf("%d / %d / %d \n",dia2,mes2,num2);
	}	
}
