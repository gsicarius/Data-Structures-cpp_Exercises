#include<stdio.h>
#include<windows.h>

int buscar(float dato[],int tope,float num, int ini);
float data =0;
int x ;

int main(){
	float arr[]={1.1,2.5,3.3,10,.36,6.6,23.36,45.9,87.5,25.6};
	int limite=9,inicio=0;
	printf("dame un numero: ");
	scanf("%f",&data);
	
	system("cls");
	
	x = buscar(arr,limite,data,inicio);
	if(x == -1)
		printf("no se encuentra el numero en el arreglo");
	else
		printf("el numero %.2f, esta en la posicion %i",data,x);
}



int buscar(float dato[],int tope,float num, int ini){
	
	if(dato[ini]==num)
		return ini;
	if(ini == tope)
		return -1;
	else
		return buscar(dato,tope,num,ini+1);
}
