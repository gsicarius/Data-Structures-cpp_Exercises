#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#include<conio.h>

struct nodo{
	int mat;
	char nom[15];
	int edad;
	struct nodo *sig;
};
typedef struct nodo NODO;
typedef NODO *NODOPTR;
int main(){
	int opc=0;
	NODOPTR inicio=NULL;
	NODOPTR nuevo=NULL;
	NODOPTR actual=NULL;
	do{
	system("cls");
	printf(" [1] Agregar\n [2] Borrar\n [3] Consultar\n [4] Modificar\n [5] Salir\n");
	printf("Elige una opcion: ");
	scanf("%i",&opc);
	system("cls");

	switch(opc){
		
		case 1:{
			nuevo =(NODO *)malloc(sizeof(NODO));
			printf("Matricula: ");
			scanf("%i",&nuevo->mat);
			printf("Nombre: ");
			scanf("%s",&nuevo->nom);
			printf("Edad: ");
			scanf("%i",&nuevo->edad);
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
			
			break;
		}
		case 3:{
			if(inicio==NULL){
				printf("\n\memoria vacia...");
				getch();
			}else{
				actual=inicio;
				while(actual!=NULL){
					printf("%p\t%i\t%s\t%i\t%p \n",actual,actual->mat,actual->nom,actual->edad,actual->sig);
					actual=actual->sig;
				}
				getch();			
			}
			break;
		}
		case 4:{
			 int mat;
                char res[3];
                printf("Matricula: ");
                scanf("%i", &mat);
                actual = inicio;
                while (actual != NULL) {
                    if (actual->mat == mat) {
                        break;
                    } actual = actual->sig;
                }
                if (actual == NULL) {
                    printf("\nMatrícula ineccistente . . .");
                    getch();
                } else {
                    printf("\nNombre: %s\nEdad: %i", actual -> nom, actual -> edad);
                    printf("\n¿Desea modificar los datos?");
                    scanf("%s", &res);
                    if (strcmp(res, "Sí") == 0) {
                        printf("Nuevo nombre: ");
                        scanf("%s", &actual -> nom);
                        printf("Nuevo edad: ");
                        scanf("%i", &actual -> edad);
                    }
                }
			break;
		}
	}
	
	
		
	}while(opc!=5);
	actual=inicio;
	while(actual!=NULL){
		actual=nuevo->sig;
		free(inicio);
		printf("se libero los registros");
		inicio=actual;
	}
}
