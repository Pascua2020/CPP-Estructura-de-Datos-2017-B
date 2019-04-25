/* Guia 2 Ejercicio 8
Realizar una función de tipo bool que reciba como parámetro de entrada un número entero
y devuelva verdadero en caso que el número esté entre 1 y 10 y falso en caso contrario.
La función deberá llamarse verificarRango.
*/
#include <iostream>
using namespace std;

bool verificarRango(int x);

int num;

int main() {
cout << "Ingrese un numero" << endl;
cin >> num;
verificarRango(num);
return 0;
}


bool verificarRango(int x){
if ( x < 11 && x > 1 )
    cout << "verdadero" << endl;
else
    cout << "falso" << endl;
}
