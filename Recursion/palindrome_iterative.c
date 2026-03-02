#include<stdio.h>

int main(){
	char string[20];
	
	printf("dame una palabra para comprobar si es PALINDROMO:\n");
	scanf("%s",string);
	
	int i= 0;
	while(string[i] != '\0')
		i++;
	
	int inicio = 0;
	int fin= i-1;
	bool palindromo = 1;
	for(int x=0;x<i;x++){
		if(string[inicio] != string[fin]){
			palindromo = 0;
			break;
		}
		inicio ++;
		fin --;
	}
	
	if(palindromo == 1)
		printf("es palindromo");
	else
		printf("no es palindromo");
	
	for(int y=i-1;y>=0;y--){
		printf("%s",string[y]);
	}
}
