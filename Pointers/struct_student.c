#include<stdio.h>
typeof
int main(){
	struct datos{
		int matricula;
		char nombre[20];
		int edad;
	}alumnos;
	printf("matricula: ");
	scanf("%d",&alumnos.matricula);
	printf("nombre: ");
	scanf("%s",&alumnos.nombre);
	printf("edad: ");
	scanf("%d",&alumnos.edad);
	printf("el alumno %s con la matricula %d tiene la edad %d",alumnos.nombre,alumnos.matricula,alumnos.edad);
	
}
