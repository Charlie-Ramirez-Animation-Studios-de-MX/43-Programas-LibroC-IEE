//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 10 version 1 de los algoritmos
Programa que muestra el uso de los arreglos unidimensionales con la estructura for*/
using namespace std;
int main(void)
{
 float a[10],b[10],c[10];
 int i;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 10 version 1 de los algoritmos");
 printf("\n\nPrograma que lee dos arreglos unidimensionales y los suma en un tercer arreglo ");
 printf("\n\n\t\tusando la estructura de control for");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 system("cls");
 for (i=0;i<=9;i++)
 {
 printf("\n\t\t Digite el valor %d del primer arreglo ",i+1);
 scanf("%f",&a[i]);
 }
 system("cls");
 for (i=0;i<=9;i++)
 {
 printf("\n\t\t Digite el valor %d del segundo arreglo ",i+1);
 scanf("%f",&b[i]);
 }
 system("cls");
 printf("\n\t\t Desplegando la informacion \n\n");
 printf("\n\t La suma de los arreglos a + b = c\n\n");
 for (i=0;i<=9;i++)
 {
 c[i]=a[i]+b[i];
 printf("\n\t\t %f + %f = %f ",a[i],b[i],c[i]);
 }
 printf("\n\n\t\tPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 return 0;
}
