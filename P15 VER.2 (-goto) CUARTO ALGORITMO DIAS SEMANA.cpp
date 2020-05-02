//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <conio.h>
/*Programa de algoritmo 4 version 2
Programa que muestra el uso de la estructura goto*/
using namespace std;
int main(void)
{
 int numdia;
 system("cls");
 printf("\n\n\t\tPrograma No 4 version 2 de los algoritmos");
 printf("\n\n\t\t");
 system("PAUSE");system("cls");
 printf("\n\n\t\tdame el numero de dia de la SEMANA ");
 scanf("%d",&numdia);
 if (numdia==1) goto uno;
 else if (numdia==2) goto dos;
 else if (numdia==3) goto tres;
 else if (numdia==4) goto cuatro;
 else if (numdia==5) goto cinco;
 else if (numdia==6) goto seis;
 else if (numdia==7) goto siete;
 else
 printf ("\n\n\t\t\a NO SABES EN QUE DIA ESTAS \a\a ");getche();exit(1);
 uno:
 printf ("\n\n\t\t\a HOY ES DOMINGO");getche();exit(1);
 dos:
 printf ("\n\n\t\t\a HOY ES LUNES");getche();exit(1);
 tres:
 printf ("\n\n\t\t\a HOY ES MARTES");getche();exit(1);
 cuatro:
 printf ("\n\n\t\t\a HOY ES MIERCOLES");getche();exit(1);
 cinco:
 printf ("\n\n\t\t\a HOY ES JUEVES");getche();exit(1);
 seis:
 printf ("\n\n\t\t\a HOY ES VIERNES");getche();exit(1);
 siete:
 printf ("\n\n\t\t\a HOY ES SABADO");getche();exit(1);
 printf ("\n\n\t\t ");
 system("PAUSE");
 return numdia;
}

