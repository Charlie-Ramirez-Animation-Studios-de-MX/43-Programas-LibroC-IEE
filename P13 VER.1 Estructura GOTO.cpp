//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 12 version 1
Programa que muestra el uso de la estructura goto*/
using namespace std;
int main(void)
{
 int a;
 system("cls");
 printf("\n\n\t\tPrograma No 12 version 1\n");
 printf("\n\n\t\tPrograma que muestra el uso de la estructura goto\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tdame un numero entre el cero y el tres ");
 scanf("%d",&a);
 if (a==0) goto cero;
 else if (a==1) goto uno;
 else if (a==2) goto dos;
 else if (a==3) goto tres;
 else
 printf ("\n\n\t\t\a no diste un número entre cero y tres \a ");getche();exit(1);
 cero:
 printf ("\n\n\t\t tecleaste un cero");getche();exit(1);
 uno:
 printf ("\n\n\t\t tecleaste un uno");getche();exit(1);
 dos:
 printf ("\n\n\t\t tecleaste un dos");getche();exit(1);
 tres:
 printf ("\n\n\t\t tecleaste un tres");getche();exit(1);
 printf ("\n\n\t\t ");
 system("PAUSE");
 return a;
} /*Exit.- provoca una salida inmediata*/
