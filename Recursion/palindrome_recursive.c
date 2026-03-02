#include<stdio.h>


int palindromo(char c[],int inicio, int fin){
	if(inicio >= fin)
		return true;
		
	if(c[inicio]!= c[fin])
		return false;
	
	return palindromo(c,inicio +1, fin-1);
}

int main(){
	char c[20];
	int i = 0;
	
	printf("dame una palabra: \n"); 
	scanf("%s",c);
	
	
	while(c[i] != '\0'){
		i++;
	}
	printf("la palabra invertida: ");
	for(int y= i-1;y>=0;y--){
		printf("%c",c[y]);
	}
	printf("\n");
	if(palindromo(c,0,i-1))
		printf("es un palindromo\n");
    else
        printf(" NO es un palindromo\n");
        
      
	  /*int ini=0;
	  int fin=i-1;
	  bool espalindromo = true;
	  for(int x =0;x<i;x++){
	  	if(c[ini] != c[fin]){
	  		espalindromo=false;
	  		break;
		  }
		ini++;
		fin--;
	  }  
	  
	  if(espalindromo)
		printf("es un palindromo\n");
    else
        printf(" NO es un palindromo\n");
        */
}
