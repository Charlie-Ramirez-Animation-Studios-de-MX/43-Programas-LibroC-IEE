//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
/*

NOTA: En el algoritmo se nos pide para 30 dias pero en este programa se hizo para 10 dias y asi poder hacer su prueba de
escritorio.

*/
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 9 version 1 de los algoritmos
Programa que muestra el uso de los arreglos unidimensionales con la estructura for*/
using namespace std;
int main(void)
{
 char nombre[10];
 char apaterno[10];
 char amaterno[10];
 int ventas[30];
 int i;
 float totventa;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 9 version 1 de los algoritmos");
 printf("\n\n\t\tPrograma que muestra el uso de los arreglos unidimensionales");
 printf("\n\n\t\tusando la estructura de control for");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tCual es tu nombre? ");
 scanf("%s",&nombre);
 printf("\n\n\t\tCual es tu apellido paterno? ");
 scanf("%s",&apaterno);
 printf("\n\n\t\tCual es tu apellido materno? ");
 scanf("%s",&amaterno);
 system("cls");
 for (i=0;i<=9;i++)
 {
 printf("\n\t\t Digite la venta del dia %2d; ",i+1);
 scanf("%d",&ventas[i]);
 }
 totventa=0;system("cls");
 printf("\n\t\tNombre del vendedor: %s %s %s ",nombre,apaterno,amaterno );
 printf ("\n\n\n\t\t Dia Ventas ");
 for (i=0;i<=9;i++)
 {
 totventa=totventa+ventas[i];
 printf("\n\t\t [%2d] %10d ",i+1,ventas[i]);
 }
 printf("\n\n\t\t Total de la venta del mes %f ",totventa);
 printf("\n\n\t\tPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 return 0;
}

