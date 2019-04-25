/* Guia 2 Ejercicio 3
Utilizar las funciones realizadas en los ejercicios 1 y 2 para realizar un programa que pida el
ingreso de un número entero mayor que cero e imprima el doble del mismo. */

#include <iostream>
using namespace std;

int el_doble(int x);
int ingreso_entero(int x);

int main() {


int numero;
cout << "ingrese un numero" << endl;
cin >> numero;
numero=ingreso_entero(numero);

int numero_por_2=el_doble(numero);
cout<<"El doble de "<<numero<<" es "<<numero_por_2 << endl;
return 0;
}

int ingreso_entero(int x)
{
while(x < 0){
    cout << "ingrese un numero mayor a cero" << endl;
    cin >> x;}
cout << x << endl;
return x;
}

int el_doble(int x)
{
int num = x * 2;
return num;
}
