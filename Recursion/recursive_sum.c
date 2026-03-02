#include<stdio.h>


int sumaT(int n, int i){
	if(i >= n){
		return i;
	}else 
		return i +sumaT(n,i+1);
}


int main(){
	int n,suma=0;
	printf("dame un numero: ");
	scanf("%d",&n);
	/*
	for(int i=1;i<=n;i++){
		suma +=i;
	}
	*/
	printf("total de la suma: %d",sumaT(n,1));
	
}
