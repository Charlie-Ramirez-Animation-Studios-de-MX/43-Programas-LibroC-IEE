//Boyzo Ramirez Carlos Alberto. 1155  F. De Comp. I.E.E. F.E.S. Aragón 01:01 a.m. 06/11/2019
#include <stdio.h>
#include <cstdlib>
#include <iostream>
//programa numero 1 version 5
//programa que determina el area de un circulo en un ambiente c++
using namespace std;
const float pi=3.1416;
int main()
{
 system("cls");
 float radio,area;
 cout << "\n\n\t\t" << "Programa No 1 version 5\n";
 cout << "\n\n\t\t" <<"Programa que determina el area de un circulo\n";
 cout << "\n\n\t\t" << "En un ambiente de c++\n";
 cout << "\n\n\t\t" << "Dame el valor de tu radio ";
 cin>>radio;
 area=pi*radio*radio;
 cout<<"\n\n\t\t" << "El area de tu circulo es "<<area<<endl;
 cout<<"\n\n\t\t";
 system("PAUSE");
 return EXIT_SUCCESS;
}
