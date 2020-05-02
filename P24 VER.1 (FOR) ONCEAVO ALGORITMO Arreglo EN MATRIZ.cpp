//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 11 version 1 de los algoritmos
Programa que muestra el uso de los arreglos bidimensionales con la estructura for*/
using namespace std;
int main(void)
{
 int matriz[4][4];
 int ren,col,suma;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 11 version 1 de los algoritmos");
 printf("\n\n\t\tPrograma que despliega una matriz de 4 x 4 ");
 printf("\n\n\t\tusando la estructura de control for");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 for (ren=0;ren<=3;ren++)
 {
 for (col=0;col<=3;col++)
 {
 printf("\n\t\t Digite el valor de la matriz [ %d %d ] ",ren+1,col+1);
 scanf("%d",&matriz[ren][col]);
 }
 }
 system("cls");
 printf("\n\t\t Despliegue de la matriz\n\n\n");
 for (ren=0;ren<=3;ren++)
 {
 for (col=0;col<=3;col++)
 {
 printf("%10d ",matriz[ren][col]);
 } printf("\n");
 }
 printf("\n\n\t\tPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 return 0;
}

