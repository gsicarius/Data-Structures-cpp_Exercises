#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#include<conio.h>
#include <string.h>
//ESTRUCTURA DE PILA
struct libros{
	char nom[15];
	char autor[20];
	int npag;
	struct libros *sig;
};

typedef struct libros NODO;
typedef NODO *NODOPTR;

struct librosAux{
	char nom[15];
	char autor[20];
	int npag;
	struct librosAux *sig;
};

typedef struct librosAux NODO2;
typedef NODO2 *NODOPTR2;

int main(){
	int opc=0;
	
	
	NODOPTR inipo=NULL;
	NODOPTR actpo=NULL;
	NODOPTR antpo=NULL;
	
	NODOPTR inipa=NULL;
	NODOPTR actpa=NULL;
	NODOPTR antpa=NULL;
	do{
		system("cls");
		printf(" [1] Agregar\n [2] eliminar \n [3] Consultar\n [4] modificar \n [5] Salir\n");
		printf("Elige una opcion: ");
		scanf("%i",&opc);
		system("cls");
		switch(opc){
			
			case 1:{
				NODOPTR nuevo=NULL;
				nuevo =(NODO *)malloc(sizeof(NODO));
				printf("Nombre: ");
				scanf("%s",&nuevo->nom);
				printf("autor: ");
				scanf("%s",&nuevo->autor);
				printf("paginas: ");
				scanf("%i",&nuevo->npag);
				nuevo->sig=NULL;	
				if(inipo==NULL)
					inipo=nuevo;
				else{
					nuevo->sig=inipo;
					inipo=nuevo;
				}
				break;
			}
			case 2:{
				
				if (inipo == NULL) {
					printf("No hay libros para eliminar.\n");
				} else {
					char nombre[20];
					printf("Nombre del libro a eliminar: ");
					scanf("%s", nombre);
			
					actpo = inipo;
					antpo = NULL;
			
			
					while (actpo != NULL && strcmp(actpo->nom, nombre) != 0) {
						antpo = actpo;
						actpo = actpo->sig;
					}
			
					if (actpo == NULL) {
						printf("Libro no encontrado.\n");
					} else {
			
						if (antpo == NULL) {
							inipo = actpo->sig;
						}
					   
						else {
							antpo->sig = actpo->sig;
						}
			
						free(actpo); 
						printf("Libro eliminado correctamente.\n");
					}
				}
			
				getch();
				break;
			}
			case 3:{
				actpo = inipo;
				while(actpo!=NULL){
					printf("%s\t %s\t %i\n",actpo->nom,actpo->autor,actpo->npag);
						
					if(inipa==NULL){
						inipa=inipo;
						actpo= actpo->sig;
							
						inipa->sig;
						inipa->sig=NULL;
							
					}else{
						actpa=actpo;
						actpo=actpo->sig;
						actpa->sig=inipa;
						inipa=actpa;
					}
				}
				inipo=NULL;
				
				actpa = inipa;
				while (actpa != NULL) {
					if (inipo == NULL) {
						inipo = inipa;
						actpa = actpa->sig;
						
						inipo->sig = NULL;
					} else {
						actpo = actpa;
						actpa = actpa->sig;
						actpo->sig = inipo;
						inipo = actpo;
					}
				}
				inipa = NULL;
				getch();
				break;
			}
			case 4:{
				if (inipo == NULL) {
					printf("No hay libros para modificar.\n");
				} else {
					char nombre[20];
					printf("Nombre del libro a modificar: ");
					scanf("%s", nombre);
			
					actpo = inipo;
					antpo = NULL;
			
			
					while (actpo != NULL && strcmp(actpo->nom, nombre) != 0) {
						actpo = actpo->sig;
					}
					
					if(actpo != NULL){
						char res[10];
						printf("libro encontrado\n quieres modificarlo? si/no: ");
						scanf("%s",res);
						if(strcmp(res,"si") == 0 || strcmp(res,"yes") == 0 || strcmp(res,"SI") == 0 || strcmp(res,"YES") == 0){
							
							printf("new Nombre: ");
							scanf("%s",&actpo->nom);
							printf("new autor: ");
							scanf("%s",&actpo->autor);
							printf("new paginas: ");
							scanf("%i",&actpo->npag);
			
							printf("Libro modificado correctamente.\n");	
						}else{
							printf("No se modifico el libro.\n");
						}
					}else{
						printf("Libro no encontrado.\n");
					}		        		            
				}
			
				getch();
				break;
			}
		}
	}while(opc!=5);
	
	actpo=inipo;
	while(inipo!=NULL){
		actpo = inipo;
		inipo = inipo->sig;
		free(actpo);
	}
	printf("se libero los registros");
	getch();
}
