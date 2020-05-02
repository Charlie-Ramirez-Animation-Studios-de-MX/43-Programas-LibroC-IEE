//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 10 version 1
Este programa hace la conversión de diferentes bases numericas*/
using namespace std;
int main(void)
{
 int opcion;
 int valor;
 system("cls");
 printf("\n\n\t\tPrograma No 10 version 1\n");
 printf("\n\n\t\tEste programa hace la conversión de diferentes bases numericas\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma que hace conversión de diferentes bases ");
 printf("\n\n\t\t1: decimal a hexadecimal \n");
 printf("\n\n\t\t2: hexadecimal a decimal \n");
 printf("\n\n\t\t3: decimal a octal \n");
 printf("\n\n\t\t4: octal a decimal \n");
 printf("\n\n\t\tintroduzca su opción ");
 scanf("%d",&opcion);
 system("cls");
 if (opcion==1)
 {
 printf ("\n\n\t\t Introduzca un valor decimal: ");
 scanf ("%d",&valor);
 printf ("\n\n\t\t%d en hexadecimal es: %x\n\n\t\t",valor,valor);
 }
 if (opcion==2)
 {
 printf("\n\n\t\t Introduzca un valor hexadecimal: ");
 scanf("%x",&valor);
 printf("\n\n\t\t%x en decimal es: %d\n\n\t\t",valor,valor);
 }
 if (opcion==3)
 {
 printf("\n\n\t\t Introduzca un valor decimal: ");
 scanf("%d",&valor);
 printf("\n\n\t\t%d en octal es: %o\n\n\t\t",valor,valor);
 }
 if (opcion==4)
 {
 printf("\n\n\t\t introduzca un valor octal: ");
 scanf("%o",valor);
 printf("\n\n\t\t %o en decimal es %d\n\n\t\t",valor,valor);
 }
 system("PAUSE");
 return EXIT_SUCCESS;
}
