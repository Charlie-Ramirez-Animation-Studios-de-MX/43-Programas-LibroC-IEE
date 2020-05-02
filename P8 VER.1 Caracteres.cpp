//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 8 version 1
Programa que visualiza el uso de los caracteres*/
using namespace std;
int main(void)
{
 char letra;
 system("cls");
 printf("\n\n\t\tPrograma No 8 version 1\n");
 printf("\n\n\t\tPrograma que visualiza el uso de los caracteres\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 8 version 1\n");
 printf("\n\n\t\tPulse una letra para continuar ");
 letra=getch();
 printf("\n\n\t\tNo se desplego ningun caracter en pantalla ");
 printf("\n\n\t\tAhora pulse otra letra para continuar ");
 letra=getche();
 printf("\n\n\t\tSe desplego el carscter %c que tu pulsaste\n\n\t\t",letra);
 system("PAUSE");
 return EXIT_SUCCESS;
}

