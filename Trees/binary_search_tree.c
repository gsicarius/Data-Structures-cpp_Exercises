#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#include<conio.h>
#include <string.h>

struct arbol{
	int valor;
	struct arbol *izq;
	struct arbol *der;
};

void insertar(struct arbol **,int);
void mostrar(struct arbol *,int);
void inOrden(struct arbol *);
void postOrden(struct arbol *);
void preOrden(struct arbol *);
struct arbol* buscar(struct arbol*,int);
struct arbol* Borrar(struct arbol *, int);

int main(){
	int opc, num;
	struct arbol *raiz=NULL;
	do{
		system("cls");
		printf(" [1] insertar \n [2] Borrar \n [3] Consultar\n [4] imprimir\n [5] inOrden\n [6] PostOrden\n [7] PreOrden\n [8] SALIR\n");
		printf("Elige una opcion: ");
		scanf("%i",&opc);
		system("cls");
		switch(opc){
			case 1:{
				printf("captura un numero: ");
				scanf("%d",&num);
				insertar(&raiz,num);
				break;
			}
			case 2:{
			  printf("Ingrese el numero a borrar: ");
				scanf("%d",&num);
				raiz = Borrar(raiz, num);
				break;
			}
			case 3:{
			  printf("Ingrese el numero a buscar: ");
				scanf("%d",&num);
				struct arbol *resultado = buscar(raiz, num);
				if(resultado != NULL){
					printf("Elemento %d encontrado en el arbol\n", num);
				}else{
					printf("Elemento %d no encontrado en el arbol\n", num);
				}
				getch();
				break;
			}
			case 4:{
				printf("los nodos del arbol son...\n");
				mostrar(raiz,0);
				getch();
				break;
			}
			case 5:{
				printf("Recorrido InOrden:\n");
				inOrden(raiz);
				printf("\n");
				getch();
				break;
			}
			case 6:{
				printf("Recorrido PostOrden:\n");
				postOrden(raiz);
				printf("\n");
				getch();
				break;
			}
			case 7:{
				printf("Recorrido PreOrden:\n");
				preOrden(raiz);
				printf("\n");
				getch();
				break;
			}
		}
	}while(opc!=8);
}

void insertar(struct arbol **raiz, int n){
	if(*raiz==NULL){
		*raiz=(struct arbol *)malloc(sizeof(struct arbol));
		(*raiz)->valor=n;
		(*raiz)->izq=NULL;
		(*raiz)->der=NULL;
	}else if (n <(*raiz)->valor){
		insertar(&((*raiz)->izq),n);
	}else if(n >(*raiz)->valor){
		insertar(&((*raiz)->der),n);
	}else{
		printf("\n numero duplicado");
		getch();
	}
}

void mostrar(struct arbol *raiz,int n){
	int i;
	if(raiz!=NULL){
		mostrar(raiz->der,n+1);
		for(i=0;i<n;++i)
			printf("  ");

		printf("%d\n ",raiz->valor);
		mostrar(raiz->izq,n+1);
	}
}

struct arbol* buscar(struct arbol*raiz,int num){
	if(raiz==NULL)
		return raiz;

	else if(raiz->valor==num)
		return raiz;

	if(num<raiz->valor)
		return buscar(raiz->izq,num);

	else if(num>raiz->valor)
		return buscar(raiz->der,num);

	else
		return NULL;
}

void inOrden(struct arbol *raiz){
	if(raiz!=NULL){
		inOrden(raiz->izq);
		printf("%d ", raiz->valor);
		inOrden(raiz->der);
	}
}

void postOrden(struct arbol *raiz){
	if(raiz!=NULL){
		postOrden(raiz->izq);
		postOrden(raiz->der);
		printf("%d ", raiz->valor);
	}
}

void preOrden(struct arbol *raiz){
	if(raiz!=NULL){
		printf("%d ", raiz->valor);
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

struct arbol* Borrar(struct arbol *raiz, int clave){
	struct arbol *p, *p2;
	if(!raiz){
		printf("%i elemento no encontrado.\n", clave);
		return raiz;
	}
	if(raiz->valor==clave){
		if(raiz->izq==raiz->der){
			free(raiz);
			return NULL;
		}
		else if(raiz->izq==NULL){
			p=raiz->der;
			free(raiz);
			return p;
		}
		else if(raiz->der==NULL){
			p=raiz->izq;
			free(raiz);
			return p;
		}
		else{
			p2=raiz->der;
			p=raiz->der;
			while(p->izq)
				p=raiz->der;
			while(p->izq)
				p=p->izq;

			p->izq=raiz->izq;
			free(raiz);
			return p2;
		}
	}
	if(raiz->valor < clave)
		raiz->der=Borrar(raiz->der,clave);
	else
		raiz->izq=Borrar(raiz->izq,clave);
	return raiz;
}
