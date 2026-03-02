//
// Created by ebanc on 10/09/2025.
//
#include<stdio.h>

int main(){
    int  num[5]={0};

    for(int i = 0; i<5;i++){
        system("cls");
        printf("escribe un numero %i: \n",i+1);
        scanf("%i",&num[i]);
    }

    system("cls");
    for(int i = 0; i<5;i++){
        printf("el numero %i esta almacenado en la posicion: %i \n",num[i],i+1);

    }
}
