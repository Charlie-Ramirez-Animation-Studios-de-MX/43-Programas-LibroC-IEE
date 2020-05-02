//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 12 version 2
Programa que muestra el uso de la estructura switch-case*/
using namespace std;
int main(void)
{
 int a;
 system("cls");
 printf("\n\n\t\tPrograma No 12 version 2");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tdame un numero entre el cero y el tres ");
 scanf("%d",&a);
 switch(a)
 {
 case 0: printf ("\n\n\t\t\a tecleaste un cero:"); break;
 case 1: printf ("\n\n\t\t\a tecleaste un uno:"); break;
 case 2: printf ("\n\n\t\t\a tecleaste un dos:"); break;
 case 3: printf ("\n\n\t\t\a tecleaste un tres:"); break;
 default: printf ("\n\n\t\t\a No diste un número entre cero y tres \a ");break;
 }
 printf ("\n\n\t\t ");
 system("PAUSE");
 return a;
}

