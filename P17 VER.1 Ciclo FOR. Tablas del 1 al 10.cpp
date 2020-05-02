//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 13 version 1
Programa que muestra el uso de la estructura for*/
/*


ESTE PROGRAMA PUEDE CONTENER UN FALLO Y SOLO GENERA LAS TABLAS DEL 1 AL 9 
A PESAR QUE MENCIONA HACERLAS DEL 1 AL 10

 --BORRA HASTA AQUI*/
using namespace std;
int main(void)
{
 int factor_1,factor_2,producto;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 13 version 1");
 printf("\n\n\t\tPrograma que muestra el uso de la estructura for");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma que despliega tablas de multiplicar del 1 al 10");
 printf("\n\n\t\t tablas de multiplicar");
 for (factor_1=1; factor_1<=9;factor_1++)
 {
 system("cls");
 printf("\n\n\n\t\t\a\a\a Tabla de %d multiplicar\n\n\n\t\t",factor_1);
 for (factor_2=1;factor_2<=10;factor_2++)
 {
 producto=factor_1*factor_2;
 printf("\n\t %5d * %5d = %5d", factor_1,factor_2,producto);
 getche();
 }
 printf("\n\n\t\t\a\aPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 }
 printf("\n\n\t Fin de las tablas de multiplicar ");
 printf ("\n\n\t\t ");
 system("PAUSE");
 return 0;
}
