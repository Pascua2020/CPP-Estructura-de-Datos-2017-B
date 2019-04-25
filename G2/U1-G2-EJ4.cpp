/* Guia 2 Ejercicio 4
Convertir el programa realizado en Ejercicio 7 de la guía de ejercicios nro 1 a una función.

Enunciado del Ejercicio de la guía 1:
Realice un programa que pida ingresar un número entero entre 0 y 9.
Validar que el número ingresado corresponda al rango permitido.
En caso de éxito informar “dato ingresado válido” caso contrario, pedir el número nuevamente.
*/
#include <iostream>
using namespace std;

int ingreso_numero(int x);

int main() {
int x;
cout << "ingrese un numero entre cero y nueve" << endl;
cin >> x;
ingreso_numero(x);

return 0;
}

int ingreso_numero(int x)
{
while(x < 0 || x > 9){
    cout << "ingrese un numero entre cero y nueve" << endl;
    cin >> x;}
cout << "dato ingresado valido" << endl;
}
