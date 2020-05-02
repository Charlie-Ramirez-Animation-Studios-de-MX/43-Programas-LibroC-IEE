//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 4 version 1
Programa que visualiza el uso del operador modulo*/
using namespace std;
int main()
{
 int a,b;
 system("cls");
 printf("\n\n\t\tPrograma No 4 version 1\n");
 printf("\n\n\t\tPrograma que visualiza el uso del operador modulo\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 4 version 1\n");
 printf("\n\n\t\tIntroduzca dos numeros que quiera dividir");
 printf("\n\n\n\t\tDame el primer numero ");
 scanf("%d",&a);
 printf("\n\n\t\tDame el segundo numero ");
 scanf("%d",&b);
 printf("\n\n\t\tEl cociente es %d ",a/b);
 printf("\n\n\t\tEl residuo es %d \n\n\t\t",a%b);
 system("PAUSE");
 return EXIT_SUCCESS;
}

