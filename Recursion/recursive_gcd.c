#include<stdio.h>
#include<windows.h>
int mcd(int y, int x);


int x,y,f;
int main(){
	printf("introduce el valor mayor: ");
	scanf("%d",&x);
	printf("introduce el valor de menor: ");
	scanf("%d",&y);
	
	printf("el maximo comun divisor de los dos numeros es de: %d",mcd(x,y) );
}
int mcd(int x, int y){
	if(y == 0){
		return x;
	}else{
		return mcd(y, x % y);
	}
}

