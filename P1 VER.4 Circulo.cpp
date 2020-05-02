//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*programa numero 1 version 4*/
/*programa que determina el area de un circulo*/
using namespace std;
#define pi 3.1416
#define inicio int main()
#define principio {
#define fin }
#define real float
#define borrar system("cls")
#define escribir printf
#define ingresa scanf
#define retener system("PAUSE")
#define retornar return EXIT_SUCCESS
inicio
principio
borrar;
real radio,area;
 escribir("\n\n\t\tPrograma No 1 version 4\n");
 escribir("\n\n\t\tPrograma que determina el area de un circulo\n");
 escribir("\n\n\t\tDame el valor de tu radio ");
 ingresa("%f",&radio);
 area=pi*radio*radio;
 escribir("\n\n\t\tEl area de tu circulo es %f\n\n\n\t\t",area);
 retener;
 retornar;
fin
