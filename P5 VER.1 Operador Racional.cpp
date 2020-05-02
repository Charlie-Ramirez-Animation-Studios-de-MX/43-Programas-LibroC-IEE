//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 5 version 1
Programa que visualiza el uso de los operadores racionales*/
using namespace std;
int main()
{
 int a,b;
 system("cls");
 printf("\n\n\t\tPrograma No 5 version 1\n");
 printf("\n\n\t\tPrograma que visualiza el uso de los operadores racionales\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 5 version 1\n");
 printf("\n\n\t\tIntroduzca un numero entero ");
 scanf("%d",&a);
 printf("\n\n\t\tIntroduzca otro numero entero ");
 scanf("%d",&b);
 printf("\n\n\t\t el numero %d < %d es %d ",a,b,a<b);
 printf("\n\n\t\t el numero %d > %d es %d ",a,b,a>b);
 printf("\n\n\t\t el numero %d <= %d es %d ",a,b,a<=b);
 printf("\n\n\t\t el numero %d >= %d es %d ",a,b,a>=b);
 printf("\n\n\t\t el numero %d != %d es %d ",a,b,a!=b);
 printf("\n\n\t\t el numero %d == %d es %d \n\n\t\t",a,b,a==b);
 system("PAUSE");
 return EXIT_SUCCESS;
}
