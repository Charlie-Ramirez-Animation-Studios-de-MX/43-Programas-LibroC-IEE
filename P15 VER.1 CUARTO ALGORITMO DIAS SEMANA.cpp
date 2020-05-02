//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa de algoritmo 4
Programa que muestra el uso de la estructura switch-case*/
using namespace std;
int main(void)
{
 int numdia;
 system("cls");
 printf("\n\n\t\tPrograma No 4 version 1 de los algoritmos");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tdame el numero de dia de la SEMANA ");
 scanf("%d",&numdia);
 switch(numdia)
 {
 case 1: printf ("\n\n\t\t\a HOY ES DOMINGO"); break;
 case 2: printf ("\n\n\t\t\a HOY ES LUNES"); break;
 case 3: printf ("\n\n\t\t\a HOY ES MARTES"); break;
 case 4: printf ("\n\n\t\t\a HOY ES MIERCOLES"); break;
 case 5: printf ("\n\n\t\t\a HOY ES JUVES"); break;
 case 6: printf ("\n\n\t\t\a HOY ES VIERNES"); break;
 case 7: printf ("\n\n\t\t\a HOY ES SABADO"); break;
 default: printf ("\n\n\t\t\a NO SABES EN QUE DIA ESTAS \a ");break;
 }
 printf ("\n\n\t\t ");
 system("PAUSE");
 return numdia;
}
