#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#include<conio.h>
#include <string.h>
//ESTRUCTURA DE PILA
struct clientes{
	char nom[15];
	int fecpra;
	int acucpra;
	struct clientes *sig;
};

typedef struct clientes NODO;
typedef NODO *NODOPTR;

struct clientesAux{
	char nom[15];
	int fecpra;
	int acucpra;
	struct clientesAux *sig;
};

typedef struct clientesAux NODO2;
typedef NODO2 *NODOPTR2;

int main(){
	int opc=0;
	
	NODOPTR inipo=NULL;
	NODOPTR actpo=NULL;
	NODOPTR antpo=NULL;
	
	NODOPTR2 inipa=NULL;
	NODOPTR2 actpa=NULL;
	NODOPTR2 antpa=NULL;
	do{
		
		system("cls");
		printf(" [1] Agregar\n [2] Eliminar \n [3] Consultar\n [4] Cambiar \n [5] Salir\n");
		printf("Elige una opcion: ");
		scanf("%i",&opc);
		system("cls");
		
		
		switch(opc){
			
			case 1:{
				NODOPTR nuevo = NULL;
				nuevo =(NODO *)malloc(sizeof(NODO));
				printf("Nombre: ");
				scanf("%s",&nuevo->nom);
				printf("fecha de compra: ");
				scanf("%s",&nuevo->fecpra);
				printf("numero de productos: ");
				scanf("%i",&nuevo->acucpra); 
				nuevo->sig=NULL;
				if(inipo==NULL){
					inipo=nuevo;
				}else{
					nuevo->sig=inipo;
					inipo=nuevo;
				}
				
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
		}
	}while(opc!=5);
}
