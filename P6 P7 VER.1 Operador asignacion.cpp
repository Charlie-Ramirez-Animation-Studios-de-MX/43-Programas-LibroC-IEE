//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 7 version 1
Programa que visualiza el uso de los operadores de asignacion*/
using namespace std;
int main(int argc, char *argv[])
{
 int a,b;
 system("cls");
 printf("\n\n\t\tPrograma No 7 version 1\n");
 printf("\n\n\t\tPrograma que visualiza el uso de los operadores de asignacion\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 7 version 1\n");
 printf("\n\n\t\tIntroduzca un numero entero ");
 scanf("%d",&a);
 printf("\n\n\t\tIntroduzca otro numero entero ");
 scanf("%d",&b);
 a+=b;
 printf("\n\n\t\tEl resultado de a+=b es a=a+b es %d",a);
 a-=b;
 printf("\n\n\t\tEl resultado de a-=b es a=a-b es %d",a);
 a*=b+5;
 printf("\n\n\t\tEl resultado de a*=b+5 es a=a*(b+5) es %d",a);
 a-=b;
 printf("\n\n\t\tEl resultado de a-=b es a=a-b es %d\n\n\t\t",a);
 system("PAUSE");
 return EXIT_SUCCESS;
}
