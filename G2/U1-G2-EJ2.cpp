/* Guia 2 Ejercicio 2
Realizar una función que lea un número entero mayor que cero
(se pide el ingreso por teclado al usuario).
La función debe validar que el número ingresado sea realmente mayor que cero.
La función debe devolver el valor ingresado. */

#include <iostream>
using namespace std;

int ingreso_entero(int x);

int main() {
int num=0;
cout << "ingrese un numero" << endl;
cin >> num;
ingreso_entero(num);

return 0;
}

int ingreso_entero(int x)
{
while(x < 1){
    cout << "ingrese un numero mayor a cero" << endl;
    cin >> x;}
cout << x << endl;
}
