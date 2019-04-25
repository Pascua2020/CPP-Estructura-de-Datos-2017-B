/* Guia 2 Ejercicio 5
Realizar un procedimiento que reciba como entrada dos números y devuelva la suma de los dos números
(dos parámetros de entrada pasados por valor y uno de salida pasado por referencia).
Luego, realizar un programa que utilice la función ingreso_numero del ejercicio 4 para pedir dos
números y el procedimiento suma_2_numeros para poder sumarlos.
Exhibir el resultado en pantalla.
*/
#include <iostream>
using namespace std;

int ingreso_numero(int x);
int suma_2_numeros(int x,int y);

int main() {
int x;
int y;
int a;
int b;

cout << "ingrese el primer numero" << endl;
cin >> x;
cout << "ingrese el segundo numero" << endl;
cin >> y;
cout << suma_2_numeros(x,y) << endl;
cout << "ingrese el primer numero" << endl;
cin >> a;
a = ingreso_numero(a);
cout << "ingrese el segundo numero" << endl;
cin >> b;
b = ingreso_numero(b);
cout << suma_2_numeros(a,b) << endl;
return 0;
}

int ingreso_numero(int x)
{
while(x < 0 || x > 9){
    cout << "ingrese un numero entre cero y nueve" << endl;
    cin >> x;}
cout << "dato ingresado valido" << endl;
return x;
}

int suma_2_numeros(int x,int y)
{
int suma = x+y;
return suma;
}
