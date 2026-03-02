#include<stdio.h>
#include<windows.h>

int buscPrimo(int n,int p);
int main(){
	
	int n,p=0,i;
	
	printf("chacador de numeros primos\n dame un numero: ");
	scanf("%d",&n);
	
	//con ciclo for
	/* for(i = n-1;i>1;i--){
		if(n % i==0)
			p++;
			break;
	}
		
	//para la funcion recurciva 1
	
	 if(buscPrimo(n,p,i = 2) ==0)
		printf("el numero no es primo");
	else
		printf("el numero si es primo");
	*/
	
	
	
	//para la funcion recursiva 2
	 if(buscPrimo(n,n-1) == 0)
		printf("el numero no es primo");
	else
		printf("el numero si es primo");
}


// funcion recursiva 1
/*
int buscPrimo(int n, int i){
	if(i != n){
		if(n % i==0){
		return 1;
	}
	return buscPrimo(n,i+1);
	}else 
		return p;
}
*/


//funcion recursiva 2
int buscPrimo(int n,int p){
	if(n%p==0)
		return 1;
	if(p<=2)
		return 0;
	return buscPrimo(n,p-1);
		
	
}



