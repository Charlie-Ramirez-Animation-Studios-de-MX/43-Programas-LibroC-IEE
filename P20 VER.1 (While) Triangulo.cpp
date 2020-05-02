//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa de 14
Programa que dibuja un triangulo*/
using namespace std;
int main(void)
{
 int renglon,columna,limite;
 char desea;
 system("cls");
 printf("\n\n\t\tPrograma No 14 version 1");
 printf("\n\n\tUsando la estructura while dibuja un triangulo\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma que dibuja un triangulo");
 printf("\n\n\t\tPrograma No 14 version 1");
 printf("\n\n\t\t\a\aDesea correr este programa S/N ? ");
 scanf("%c",&desea);
 desea=toupper(getche());
 while(desea!='N')
 {
 system("cls");printf("\n\n\t\t");system("PAUSE");
 printf("\n\n\t\t Digite el limite de tu triangulo [0-20]");
 limite=-1;
 while(limite<0||limite>20)
 {
 scanf("%i",&limite);
 printf("\n\n\t\tTriangulo con %i renglones",limite);
 renglon=0;
 while(renglon<limite)
 {
 renglon++;
 printf("\n");
 columna=0;
 while(columna<renglon)
 {
 columna++;
 printf("%i",columna);
 }
 }
}
 printf("\n\n\t\t\a\aDesea volver a dibujar otro triangulo S/N ? ");
 scanf("%c",&desea);
 desea=toupper(getche());
 }
 return 0;
}

