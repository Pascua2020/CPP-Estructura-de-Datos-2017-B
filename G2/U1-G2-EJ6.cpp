/* Guia 2 Ejercicio 6
Convertir el programa realizado en Ejercicio 9 de la gu�a de ejercicios nro 1 a un procedimiento.

Enunciado del ejercicio de la gu�a 1:
Realice un programa que exhiba un men� con tres opciones.
Pida al usuario elegir una opci�n.
En el caso de ser v�lida la opci�n, indicar en pantalla �Ud. opt� por: � y exhibir la opci�n.
En el caso que se haya ingresado una opci�n inv�lida, el programa pida un nuevo ingreso, hasta que el mismo sea v�lido.
*/
#include <iostream>
using namespace std;

int opcion(int x);
int num;
int main() {
cout << "opcion 1" << endl;
cout << "opcion 2" << endl;
cout << "opcion 3" << endl;
cin >> num;
opcion(num);
return 0;
}

int opcion(int x)
{
while(x != 1 && x != 2 && x != 3){
    cout << "ingrese de nuevo el numero" << endl;
    cin >> x;}
if(x == 1){
cout << "opcion 1 ingresada" << endl;}
else if(x == 2){
cout << "opcion 2 ingresada" << endl;}
else if(x == 3){
cout << "opcion 3 ingresada" << endl;}
}
