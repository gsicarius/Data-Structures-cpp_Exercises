#include<stdio.h>
//numero perfecto

int numP(int n,int i,int suma){
	if(i == n)
		return suma;
		
	if(n%i==0)
		suma +=i;
	
	return numP(n,i+1,suma);
}


int main(){
	int n,suma=0;
	printf("dame un numero: ");
	scanf("%d",&n);
	
	
	if(numP(n,1,0)==n)
		printf("%d es un numero perfecto\n", n);
    else
        printf("%d NO es un numero perfecto\n", n);
	/*
	for(int i=1;i<n;i++){
		if(n%i==0){
			suma +=i
		}
	}
	
	if (suma == n)
		printf("%d es un número perfecto\n", n);
    else
        printf("%d NO es un número perfecto\n", n);
        */
        
}
