//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 11 version 2 de los algoritmos
Programa que muestra una suma de matrices con el uso de los
arreglos bidimensionales con la estructura for*/
using namespace std;
int main(void)
{
 int matriz1[3][3],matriz2[3][3],matriz3[3][3];
 int ren,col,suma;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 11 version 2 adicional");
 printf("\n\n\t\tPrograma que despliega dos matrices de 3 x 3 ");
 printf("\n\n\ty despues las suma usando la estructura de control for");
 printf("\n\n\t\t");
 system("PAUSE");
 /*empezamos con la primera matriz*/
 system("cls");
 for (ren=0;ren<=2;ren++)
 {
 for (col=0;col<=2;col++)
 {
 printf("\n\t\t Digite el valor de la matriz [ %d %d ] ",ren+1,col+1);
 scanf("%d",&matriz1[ren][col]);
 }
 }
/*continuamos con la segunda matriz*/
 system("cls");
 for (ren=0;ren<=2;ren++)
 {
 for (col=0;col<=2;col++)
 {
 printf("\n\t\t Digite el valor de la matriz [ %d %d ] ",ren+1,col+1);
 scanf("%d",&matriz2[ren][col]);
 }
 }
/*desplegamos la primera matriz*/
 system("cls");
 printf("\n\t\tMATRIZ 1\n");
 for (ren=0;ren<=2;ren++)
 {
 for (col=0;col<=2;col++)
 {
 printf("%10d ",matriz1[ren][col]);
 } printf("\n");
 }
/*continuamos con el despliegue de la segunda matriz*/
printf("\n\t\tMATRIZ 2\n");
 for (ren=0;ren<=2;ren++)
 {
 for (col=0;col<=2;col++)
 {
 printf("%10d ",matriz2[ren][col]);
 } printf("\n");
 }
 /* hacemos la suma de matrices*/
 for (ren=0;ren<=2;ren++)
 {
 for (col=0;col<=2;col++)
 {
 matriz3[ren][col]=matriz1[ren][col]+matriz2[ren][col];
 }
 }
/*desplegamos la matriz resultado*/
printf("\n\n\t\tMATRIZ RESULTADO\n\n");
 for (ren=0;ren<=2;ren++)
 {
 for (col=0;col<=2;col++)
 {
 printf("%10d ",matriz3[ren][col]);
 } printf("\n");
 } printf("\n");
 printf("\n\n\t\tPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 return 0;
}
