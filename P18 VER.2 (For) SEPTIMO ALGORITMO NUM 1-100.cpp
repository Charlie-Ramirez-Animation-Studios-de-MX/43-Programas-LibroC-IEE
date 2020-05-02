//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
/*CUIDADO
ESTE PROGRAMA SOLO ES CAPAZ DE CONTAR HASTA EL 55 EN INCREMENTOS DESIGUALES
PLAUSIBLEMENTE ASI SEA EL DISEÑO ---- REMITASE A LA PAGINA 23 DEL PDF PARA ASEGURAR
BORRA HASTA AQUI*/
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 7 version 2 de los algoritmos
Programa que muestra el uso de la estructura for*/
using namespace std;
int main(void)
{
 int indice,sumatoria=0;
 system("cls");
 printf("\n\n\t\tPrograma No 7 version 2 de los algoritmos");
 printf("\n\n\t\tPrograma que muestra el uso de la estructura for\n\n\t\t");
/*
 LA SIGUIENTE LINEA ORIGINALMENTE CARECE DEL ARGUMENTO "\t" y el texto se genera pegado a la ventana 
 PODRIA SER A PROPOSITO O SER UN ERROR LO DEJO A CONSIDERACION  
 (ORIGINALMENTE ES:		prsdintf("\n\nPrograma que calcula e imprime la sumatoria de los numeros del 1 hasta el 100");)
 */
 printf("\n\n\tPrograma que calcula e imprime la suma de los numeros del 1 hasta el 100");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tSUMA DE NUMEROS DEL 1 HASTA EL 100\n\n\t\t");
 for (indice=1;indice<=10;indice++)
 {
 system("cls");
 sumatoria=sumatoria+indice;
 printf("\n\t\t Sumatoria= %d ",sumatoria);
 getche();
 }
 printf("\n\n\t\tLa suma total del 1 al 100 es : %d ",sumatoria);
 printf ("\n\n\t\t ");
 system("PAUSE");
 return sumatoria;
}

