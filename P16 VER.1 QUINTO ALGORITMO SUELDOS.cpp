//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa de algoritmo 5
Programa que muestra el uso de la estructura goto(repeat)*/
using namespace std;
int main(void)
{
 char nombre[10];
 char apaterno[10];
 char amaterno[10];
 int hrstrab;
 float cuotahr,sueldo;
 char desea;
repetir:
 system("cls");
 printf("\n\n\t\tPrograma No 5 version 1 de los algoritmos");
 printf("\n\n\t\tUsando la estructura goto sustituyendo a la estructura repeat\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma que determina el sueldo de un empleado");
 printf("\n\n\t\tPrograma No 5 version 1 de los algoritmos");
 printf("\n\n\t\tCual es tu nombre? ");
 gets(nombre);
 printf("\n\n\t\tCual es tu apellido paterno? ");
 gets(apaterno);
 printf("\n\n\t\tCual es tu apellido materno? ");
 gets(amaterno);
 printf("\n\n\t\tCuantas horas trabajaste ");
 scanf("%d",&hrstrab);
 printf("\n\n\t\tCual es tu cuota por hora trabajada ");
 scanf("%f",&cuotahr); printf("\n\n\t\t");
 sueldo=(hrstrab*cuotahr);
 system("PAUSE");system("cls");
 printf("\n\n\t\t NOMBRE DEL EMPLEADO SUELDO ");
 printf("\n\n\t\t %s %s %s $ %f \n\n\t\t",nombre,apaterno,amaterno,sueldo);
 system("PAUSE");
 printf("\n\n\t\t\a\aDESEA PROCESAR OTRO EMPLEADO S/N ? ");
 scanf("%c",&desea);desea=toupper(getche());getche();
if(desea=='s'||desea=='S')
{
goto repetir;
}
else
{
goto fin;
}
fin:;
 return EXIT_SUCCESS;
}
