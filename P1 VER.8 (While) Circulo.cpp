//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Arag�n 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>
/*programa numero 1 version 8*/
/*programa que determina el area de un circulo*/
using namespace std;
#define pi 3.1416
int main()
{
 float radio, area;
 char desea;
 desea='s';
 while(desea!='N')
 {
 system("cls");
 printf("\n\n\t\tPrograma No 1 version 8\n");
 printf("\n\n\t\tPrograma que determina el area de un circulo\n");
 printf("\n\n\t\tDame el valor de tu radio ");
 scanf("%f",&radio);
 area=pi*pow(radio,2);
 printf("\n\n\t\tEl area de tu circulo es %f \n\n\n\t\t",area);
// ----------------------------------PLAUSIBLEMENTE ESTE ARGUMENTO ESTA MAL REDACTADO
 printf("\n\n\t\t\a\aDESEA PROCESAR OTRO EMPLEADO S/N ? ");
//---------------------------------DEBERIA SER CIRCULO sin embargo el Programa Funciona
 scanf("%c",&desea);
 /*system("PAUSE");*/
 desea=toupper(getche());
 }
 return 0;
}
