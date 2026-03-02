#include<stdio.h>
#include<windows.h>

int b,e;
int r=1;
int potencia(int b, int e, int r);

int main(){
	printf("ingresa la base: "),
	scanf("%i",&b);
	
	printf("ingresa el exponente: ");
	scanf("%i",&e);
	
	//for(int i = 0; i<e; i++)
	//	r*=b;
	//printf("1-el resultado es: %i \n",r);
	
	
	//r=1;
	//for(int i = e; i>0; i--)
		//r*=b;
	printf("el resultado es: %i",potencia(b,e,r));
	
}

int potencia(int b, int e, int r){
	if(e == 0)
		return r;
	else{
		r*=b;
		return potencia(b,e-1,r);
	}
}

