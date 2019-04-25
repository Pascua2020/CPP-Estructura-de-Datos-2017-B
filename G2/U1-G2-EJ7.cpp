/* Guia 2 Ejercicio 7
Modificar el ejercicio 6 de manera tal que el procedimiento nos devuelva la opción del menú elegida por el usuario.
El valor devuelto por el procedimiento deberá almacenarse en la variable: opcionMenuElegida
*/
#include <iostream>
using namespace std;

int opcion(int x);
int num;
int opcionMenuElegida;
int main() {
cout << "opcion 1" << endl;
cout << "opcion 2" << endl;
cout << "opcion 3" << endl;
cin >> num;
opcionMenuElegida = opcion(num);
cout << opcionMenuElegida << endl;
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
return x;
}
