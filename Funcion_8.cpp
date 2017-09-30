#include <stdio.h>
/*Comentario
Funcion que convierte el numero de segundos transmitido en horas, minutos y 
segundos.
Fecha:23-Septiembre-2017
Elaborado por: Viviana Rojas Ruiz*/

int tiempo(int totalseg, int &horas, int &min, int &seg);

int main() 
{
	int totalseg,horas,min,seg;
	printf("Ingrese cantidad de segundos: \n");
	scanf("%d",&totalseg);
	
	tiempo(totalseg,horas,min,seg);
	
	printf("El tiempo total es: \n %d Horas:%d Minutos:%d Segundos \n",horas,min,seg);
	return 0;
}

int tiempo(int totalseg, int &horas, int &min, int &seg)
{
	int totalmin;
	
	totalmin=totalseg/60;
	seg=totalseg-(totalmin*60);
	horas=totalmin/60;
	min= totalmin-(horas*60);
	
	return horas,min,seg;	
}
