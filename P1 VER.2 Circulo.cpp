//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*programa numero 1 version 2*/
/*programa que determina el area de un circulo*/
using namespace std;
const float pi=3.1416;
int main() 
{
 system("cls");
 float radio, area;
 printf("\n\n\t\tPrograma No 1 version 2\n");
 printf("\n\n\t\tPrograma que determina el area de un circulo\n");
 printf("\n\n\t\tDame el valor de tu radio ");
 scanf("%f",&radio);
 area=pi*radio*radio;
 printf("\n\n\t\tEl area de tu circulo es %f\n\n\n\t\t",area);
 system("PAUSE");
 return EXIT_SUCCESS; 
 }
