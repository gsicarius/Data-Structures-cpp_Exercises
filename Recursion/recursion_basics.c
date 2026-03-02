#include<stdio.h>
#include<>

int factoriall(int n);
int suma(int n);
int potenciaa(int n,int x);
int sucesion(int n);


int main(){
	printf("Factorial es de: %d \n",factoriall(5));
	printf("la suma es de: %d \n",suma(5));
	printf("la potencia es de: %d \n",potenciaa(5,3));
	printf("la sucesion es de: ");sucesion(10);

}

int factoriall(int n){
	if(n == 1)
		return n;
	else
		return n * factoriall(n-1);
}

int suma(int n){
	if(n == 1)
		return n;
	else
		return n + suma(n-1);
}

int potenciaa(int n,int x){
	if(x == 1 )
		return n;
	else
		return n *potenciaa(n,x-1); 
}

int sucesion(int n){
	if(n == 1 ){
		printf("%d",1);
		return 1;
	}else{
		sucesion(n-1);
		printf("%d",n);
		return n;
	}
}































