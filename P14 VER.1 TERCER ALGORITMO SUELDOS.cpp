//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Arag�n 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 3 del los algoritmos
Programa que calcula el sueldo de un empleado*/
using namespace std;
int main(void)
{
 char nombre[10];
 char apaterno[10];
 char amaterno[10];
 int hrstrab;
 float cuotahr,sueldo;
 system("cls");
 printf("\n\n\t\tPrograma No 2 version 2 de los algoritmos\n");
 printf("\n\n\t\tPrograma que determina el sueldo de un empleado\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 2 version 2 de los algoritmos");
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
 if (hrstrab>40)
 {
 sueldo=(hrstrab*cuotahr)*(1.05);
 }
 else
 {
 printf("\n\n\t\t\a\aNO TRABAJASTE MAS DE 4O HORAS \n\n\t\t\a\a ");
 }
 system("PAUSE");system("cls");
 printf("\n\n\t\t NOMBRE DEL EMPLEADO SUELDO ");
 printf("\n\n\t\t %s %s %s $ %f \n\n\n\n\t\t",nombre,apaterno,amaterno,sueldo);
 system("PAUSE");
 return EXIT_SUCCESS;
}

