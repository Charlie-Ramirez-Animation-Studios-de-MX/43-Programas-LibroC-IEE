//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 11 version 1
Programa que muestra el uso del operador condiciónal*/
using namespace std;
int main(void)
{
 int x,y;
 system("cls");
 printf("\n\n\t\tPrograma No 11 version 1\n");
 printf("\n\n\t\tPrograma que muestra el uso del operador condiciónal\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tdame el valor de un número entero ");
 scanf("%d",&x);
 printf("\n\n\t\tdame el valor de un segundo número entero para compararlos ");
 scanf("%d",&y);
 printf("\n\n\t\t%d es el número mayor entre %d y %d \n\n\n\t\t",((x>y)?x:y),x,y);
 system("PAUSE");
 return x,y;
}
