//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
/*Programa No 3 version 1*/
/*Programa que determina el tamaño de los tipos basicos*/
using namespace std;
int main()
{
 system("cls");
 printf("\n\n\t\tPrograma No 3 version 1\n");
 printf("\n\n\t\tPrograma que determina el tamaño de los tipos basicos\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma No 3 version 1\n");
 printf("\n\n\t\tEl tipo char ocupa %d bytes",sizeof(char));
 printf("\n\n\t\tEl tipo long ocupa %d bytes",sizeof(long));
 printf("\n\n\t\tEl tipo int ocupa %d bytes",sizeof(int));
 printf("\n\n\t\tEl tipo short ocupa %d bytes",sizeof(short));
 printf("\n\n\t\tEl tipo float ocupa %d bytes",sizeof(float));
 printf("\n\n\t\tEl tipo double ocupa %d bytes\n\n\t\t",sizeof(double));
 system("PAUSE");
 return EXIT_SUCCESS;
}

