#include<stdio.h>

int main(){
	int a=5;
	int *pa; // creacion de puntero
	pa=&a; //pa esta guardando la direccion de memoria 
	
	printf("el valor asignado a  la variable n es de: %d \n",a);
	printf("la direccion de la variable n es de: %p \n",pa); //%p muestra la direccion de memoria de la variable
	*pa=15;
	printf("el valor asignado a  la variable n es de: %d \n",a);
	printf("la direccion de la variable n es de: %p\n",pa);
	
	int o=10;
	int *po;
	po=&o;
	printf("el valor asignado a  la variable o es de: %d \n",o);
	printf("la direccion de la variable o es de: %p \n",po);
	pa=po;
	if(pa==po)
		printf("\n son iguales %i %p %i %p \n",a,pa,o,po);
	else
		printf("\n son diferentes %i %p %i %p \n",a,pa,o,po);

	
}
