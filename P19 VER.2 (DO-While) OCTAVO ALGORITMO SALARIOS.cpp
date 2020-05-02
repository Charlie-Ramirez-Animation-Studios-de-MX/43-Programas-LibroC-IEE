//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa de algoritmo 8 VERSION 2
Programa que muestra el uso de la estructura DO-WHILE*/
using namespace std;
int main(void)
{
 char nombre[10];
 char apaterno[10];
 char amaterno[10];
 int hrstrab;
 float cuotahr,sueldo;
 char desea;
 system("cls");
 printf("\n\n\t\tPrograma No 8 version 2 de los algoritmos");
 printf("\n\n\t\tUsando la estructura do-while\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma que determina el sueldo de los empleados");
 printf("\n\n\t\tPrograma No 8 version 2 de los algoritmos");
 printf("\n\n\t\t\a\aExiste algun empleado a procesar S/N ? ");
 scanf("%c",&desea);
 desea=toupper(getche());
 do
 {
 system("cls");printf("\n\n\t\t");system("PAUSE");
 printf("\n\n\t\tCual es tu nombre? ");
 scanf("%s",&nombre);
 printf("\n\n\t\tCual es tu apellido paterno? ");
 scanf("%s",&apaterno);
 printf("\n\n\t\tCual es tu apellido materno? ");
 scanf("%s",&amaterno);
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
 scanf("%c",&desea);
 desea=toupper(getche());
 }
 while(desea!='N');
 return 0;
}

