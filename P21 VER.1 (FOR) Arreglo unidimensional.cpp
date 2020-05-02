//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 15 version 1
Programa que muestra el uso de los arreglos unidimensionales con la estructura for*/
using namespace std;
int main(void)
{
 int cantidad[12];
 int contador;
 long int suma;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 15 version 1");
 printf("\n\n\t\tPrograma que muestra el uso de los arreglos unidimensionales");
 printf("\n\n\t\tusando la estructura de control for");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\t\t Acumulados mensuales ");
 for (contador=0;contador<=11;contador++)
 {
 printf("\n\t\t Digite la ventas del mes %2d; ",contador+1);
 scanf("%d",&cantidad[contador]);
 }
 suma=0;system("cls");
 printf("\n\n\t\t TABLA DE ACUMULADOS ");
 printf("\n\t\t = = = = = = = = = = = = = = =");
 printf ("\n\t\t Mes Ventas Acumulados ");
 for (contador=0;contador<=11;contador++)
 {
 suma=suma+cantidad[contador];
 printf("\n\t\t [%2d] %10d %10d",contador+1,cantidad[contador],suma);
 }
 printf("\n\n\t\t\a\aPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 printf ("\n\n\t\t");
 return 0;
}

