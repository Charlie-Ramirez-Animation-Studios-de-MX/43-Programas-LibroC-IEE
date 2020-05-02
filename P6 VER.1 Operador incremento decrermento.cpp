//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 6 version 1
Programa que visualiza el uso de los operadores de incremento y decremento*/
using namespace std;
int main(void)
{
 int a=0,b=0,c=0;
 system("cls");
 printf("\n\n\t\tPrograma No 6 version 1\n");
 printf("\n\n\t\tPrograma que visualiza el uso de los operadores de incremento y decremento\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 6 version 1\n");
 a= ++b + ++c;
 printf("\n\n\t\t%d %d %d\t\t",a,b,c);/*que se imprime*/
 a= b++ + c++;
 printf("\n\n\t\t%d %d %d\t\t",a,b,c);/*que se imprime*/
 a= b++ + ++c;
 printf("\n\n\t\t%d %d %d\t\t",a,b,c);/*que se imprime*/
 a= --b + --c;
 printf("\n\n\t\t%d %d %d\t\t",a,b,c);/*que se imprime*/
 a= b-- + c--;
 printf("\n\n\t\t%d %d %d\t\t",a,b,c);/*que se imprime*/
 a= b-- + --c;
 printf("\n\n\t\t%d %d %d\t\t",a,b,c);/*que se imprime*/
 system("PAUSE");
 return EXIT_SUCCESS;
}

