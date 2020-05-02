//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 9 version 2
Programa que visualiza las lecturas de las variables del tipo caracter\*/
using namespace std;
int main(void)
{
 char nombre[10];
 char apaterno[10];
 char amaterno[10];
 system("cls");
 printf("\n\n\t\tPrograma No 9 version 2\n");
 printf("\n\n\tPrograma que visualiza las lecturas de las variables del tipo caracter\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 9 version 2\n");
 printf("\n\n\t\tCual es tu nombre? ");
 scanf("%s",&nombre);
 printf("\n\n\t\tCual es tu apellido paterno? ");
 scanf("%s",&apaterno);
 printf("\n\n\t\tCual es tu apellido materno? ");
 scanf("%s",&amaterno);
 printf("\n\n\t\tTu nombre completo es %s %s %s ",nombre,apaterno,amaterno);
 printf("\n\n\t\tTus iniciales son: %c %c %c \n\n\t\t",nombre[0],apaterno[0],amaterno[0]);
 system("PAUSE");
 return EXIT_SUCCESS;
}

