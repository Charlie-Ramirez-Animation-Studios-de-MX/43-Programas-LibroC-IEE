//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>
/*programa numero 1 version 7*/
/*programa que determina el area de un circulo*/
using namespace std;
#define pi 3.1416
int main()
{
 float radio, area;
 char a;
comienza:
 system("cls");
 printf("\n\n\t\tPrograma No 1 version 7\n");
 printf("\n\n\t\tPrograma que determina el area de un circulo\n");
 printf("\n\n\t\tDame el valor de tu radio ");
 scanf("%f",&radio);
 area=pi*pow(radio,2);
 printf("\n\n\t\tEl area de tu circulo es %f \n\n\n\t\t",area);
 // ----------------------------------PLAUSIBLEMENTE ESTE ARGUMENTO ESTA MAL REDACTADO
 printf("\n\n\t\t\a\aDESEA PROCESAR OTRO EMPLEADO S/N ? ");
 //---------------------------------DEBERIA SER CIRCULO sin embargo el Programa Funciona
scanf("%c",&a);a=toupper(getche());getche();

if(a=='s'||a=='S')
{
goto comienza;
}
else
{
goto fin;
}
fin:;
 return EXIT_SUCCESS;
}

