//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
/*
			ADVERTENCIA
ESTE PROGRAMA GENERA LAS TABLAS SIN EMBARGO TAMBIEN REGISTRA E IMPRIME LA TECLA PULSADA EN EL RESULTADO
POR LO QUE SI SE UTILIZA UN NUMERO PUEDE DAR LA FALSA SENSACION DE RESULTADO ERRONEO
---PARA EVITAR ESTO USA LA TECLA ESPACIO O ENTER, DE LO CONTRARIO 2X2= 4e ó =48 por ejemplo
*/
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa No 13 version 2
Programa que muestra el uso de la estructura while*/
using namespace std;
int main(void)
{
 int factor_1,factor_2,producto;
 char espera;
 system("cls");
 printf("\n\n\t\tPrograma No 13 version 2");
 printf("\n\n\t\tPrograma que muestra el uso de la estructura while");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tPrograma que despliega tablas de multiplicar del 1 al 10");
 printf("\n\n\t\t tablas de multiplicar");
 factor_1=0;
 while(factor_1<=9)
 {
 factor_1++;
 system("cls");
 printf("\n\n\n\t\t\a\a\a Tabla de %d multiplicar\n\n\n\t\t",factor_1);
 factor_2=0;
 while(factor_2<=9)
 {
 factor_2++;
 producto=factor_1*factor_2;
 printf("\n\t %5d * %5d = %5d", factor_1,factor_2,producto);
 getche();
 }
 printf("\n\n\t\t\a\aPULSE CUALQUIER TECLA PARA CONTINUAR");
 espera=getch();
 }
 printf("\n\n\t\t\a\a FIN DE LAS TABLAS DE MULTIPLICAR\a\a");
 printf ("\n\n\t\t ");
 system("PAUSE");
 return 0;
}

