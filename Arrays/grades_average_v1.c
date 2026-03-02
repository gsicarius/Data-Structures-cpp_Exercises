#include<stdio.h>
#include<windows.h>
int main(){
	int cali[10];
	
	for(int i=0;i<10;i++){
		printf("dame la calificacion numero %i: \n",i +1);
		scanf("%d",&cali[i]);
		system("cls");
	}
	system("cls");
	for(int i=0;i<10;i++){
		printf("la calificacion de %i esta en la posicion numero %i \n",cali[i], i+1);
	}
	
	float prom = 0;
	int suma = 0;
	for(int i=0;i<10;i++){
		
		suma += cali[i];
	}
	prom = suma/10;
	printf("el promedio de las diez calificaciones es de: %.2f\n",prom);
	
	
	int mayores=0;
	int menores=0;
	for(int i=0;i<10;i++){
		if(cali[i]>prom){
			mayores ++;
		}else if(cali[i]<prom){
			menores++;
		}
	}
	printf("hay %i alumnos arriba del promedio\n",mayores);
	printf("hay %i alumnos abajo del promedio\n",menores);

	
		
}
