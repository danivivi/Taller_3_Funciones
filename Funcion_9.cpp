#include <stdio.h>
/*Comentario
Funcion que calcula el año, mes, dia actual para el numero de dias que se le
transmite.
Fecha: 24-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/
	
void calc_anios(int anios, int mes, int dias,int numdias,int&d, int &m,int &a );
int anios,mes,dias,numdias,d,m,a;

int main() 
{
	calc_anios(anios,mes,dias,numdias,d,m,a);	
	return 0;
}

void calc_anios(int anios, int mes, int dias,int numdias,int&d, int &m,int &a )
{
 	int restodias;
	d=1;
	m=1;
	a=2000;

	printf("Ingrese numero de dias:\n");
	scanf("%d",&numdias);
	
	anios = numdias/365;
	restodias = numdias-(anios*365);
	mes = restodias/30;
	dias = restodias-(mes*30);
	
	d+=dias;
	m+=mes;
	a+=anios;
	printf("Los dias equivalen a:\n");
	printf("Dias: %d Mes: %d Año: %d\n",d,m,a);	
}
