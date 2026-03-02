#include<stdio.h>
#include<windows.h>
int main(){
	float cali[10];
	
		for(int i=0;i<10;i++){
			printf("dame la calificacion numero %i: \n",i +1);
			scanf("%f",&cali[i]);
			system("cls");
		}
	system("cls");
		for(int i=0;i<10;i++){
			printf("la calificacion de %.2f esta en la posicion numero %i \n",cali[i], i+1);
		}
	
	float prom = 0;
	float suma = 0;
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
		
		
		
	float cerca = cali[0] - prom;
		if (cerca < 0){
			cerca = -cerca;
		}
		
	int pos = 1;
	float cont = 0;
	float alum;
		for(int i=1;i<10;i++){
				cont = cali[i]-prom;
				if(cont < 0){
					cont = -cont;
				}
			     if(cont < cerca){
					cerca = cont;
					pos = i+1; 
					alum = cali[i];
			}
			
		}
	printf("hay %i alumnos arriba del promedio\n",mayores);
	printf("hay %i alumnos abajo del promedio\n",menores);
	printf("el alumno %i es el mas cercano al promedio con la calificacion de: %.2f \n",pos,alum);


	
		
}
