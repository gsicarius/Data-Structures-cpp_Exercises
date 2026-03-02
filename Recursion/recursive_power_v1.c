#include<stdio.h>

int factorial(int n);
int potencia(int n, int b);
int main(){
	int n;
	int b;
	printf("dame un numero: ");
	scanf("%d",&n);
	
	printf("dame otro numero: ");
	scanf("%d",&b);
	
	
	/*int cont = n;
	for(int i = 1;i < n; i++){
		cont *= i; 
	}
	
	int cont = n;
	for(int i = 1;i < b; i++){
		cont *= n;
	}
	*/
	printf("el resultado es: %d", potencia(n,b));

}
/*
int factorial(int n){
	if(n == 1)
		return n;
	else
		return n *factorial(n-1);
}

*/
int potencia(int n, int b){
	if(b == 1)
		return n;
	else
		return n * potencia(n,b-1);
}



