#include<stdio.h>
#include<windows.h>

int b,e;
int r=1;
long potencia(int b, int e);

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
	printf("el resultado es: %ld",potencia(b,e));
	
}

//recursividad ---------------------------------------------------------------------------------------;

//forma 1
/*int potencia(int b, int e, int r){
	if(e == 0)
		return r;
	else{
		r*=b;
		return potencia(b,e-1,r);
	}
}
*/

//forma 2
long potencia(int b, int e){
	if(e == 0)
		return 1;
	return b*potencia(b,e-1);
	
}


