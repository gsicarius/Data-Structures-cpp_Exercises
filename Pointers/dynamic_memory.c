#include<stdio.h>
#include<malloc.h>
int main(){
	
	int *pint;
	//convercion a entero al apuntador
	//malloc reserva un espacio de memoria
	//sizeof mide el peso del tipo de variable
	//pint=(int *)malloc(sizeof(int));
	
	pint=new int;
	*pint=10;
	printf("en la direccion de memoria %p esta en el numero %i",pint,*pint);
	//free(pint);
	delete pint;
}

