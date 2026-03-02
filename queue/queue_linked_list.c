#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#include<conio.h>
#include <string.h>

struct cola{
	char nom[15];
	int tam;
	struct cola *sig;
};
typedef struct cola NODO;
typedef NODO *NODOPTR;
int main(){
	int opc=0;
	NODOPTR inicio=NULL;
	NODOPTR nuevo=NULL;
	NODOPTR actual=NULL;
	NODOPTR anterior=NULL;
	do{
	system("cls");
	printf(" [1] Agregar\n [2] dar prioridad \n [3] Consultar\n [4] imprimir\n [5] Salir\n");
	printf("Elige una opcion: ");
	scanf("%i",&opc);
	system("cls");

	switch(opc){
		
		case 1:{
			nuevo =(NODO *)malloc(sizeof(NODO));
			printf("Nombre: ");
			scanf("%s",&nuevo->nom);
			printf("tam: ");
			scanf("%i",&nuevo->tam);
			nuevo->sig=NULL;
			if(inicio==NULL)
				inicio=nuevo;
			else{
				actual=inicio;                                                                                                                                                                                                   
				while(actual->sig!=NULL){
					actual=actual->sig;
				}
				actual->sig=nuevo;
			}
			break;
		}
		case 2:{
			if(inicio==NULL || inicio->sig == NULL){
				printf("no hay documentos suficientes");
			}else{
				char nombre[20];
				printf("nombre del documento: ");
				scanf("%s",nombre);
				
				actual=inicio;
				
				while(actual!=NULL && strcmp(actual->nom, nombre) != 0){
					anterior = actual;
					actual= actual->sig;
				}
				
				
		        if (actual == NULL) {
		            printf("Documento no encontrado.\n");
		        }
				if(actual == inicio){
					printf("documento ya esta de primero");
				}else{
					anterior->sig = actual->sig;
					actual->sig = inicio->sig;
					inicio->sig = actual;
					printf("documento movido a segundo lugar en la cola");
				}
			}
			 getch();
			break;
		}
		case 3:{
			if(inicio==NULL){
				printf("\n memoria vacia...");
				getch();
			}else{
				actual=inicio;
				while(actual!=NULL){
					printf("%s\t(%i KB)\n", actual->nom, actual->tam);
					actual=actual->sig;
				}
				getch();			
			}
			break;
		}
		case 4:{
			  if (inicio == NULL) {
		        printf("Cola vacía.\n");
		    } else {
		        actual = inicio;
		        inicio = inicio->sig; 
		        printf("Imprimiendo: %s (%i KB)\n", actual->nom, actual->tam);
		        free(actual);
		    }
		    getch();
		    break;
		}
	}
	
	
		
	}while(opc!=5);
		actual=inicio;
	while(actual!=NULL){
		inicio=inicio->sig;
		free(actual);
	}
	printf("se libero los registros");
	 getch();
}


