#include<stdio.h>
#include<windows.h>

int f;
int r= 1;
long factorial(int f,int r);
int main(){
	
	printf("ingresa un numero para sacar el factorial: ");
	scanf("%i",&f);
	
	/*r=f;
	for(int i=f-1; i >= 1;i--){
		r  *= i;
	}
	*/
	r=f;
	printf("el factorial de %i es de: %i",f,factorial(f-1,r));
	
}

long factorial(int f,int r){
	if( f == 1){
		return r;
	}else
		r  *= f;
		return(r,f-1);
}
