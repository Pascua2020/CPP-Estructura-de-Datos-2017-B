/* Guia 2 Ejercicio 8
Realizar una funci�n de tipo bool que reciba como par�metro de entrada un n�mero entero
y devuelva verdadero en caso que el n�mero est� entre 1 y 10 y falso en caso contrario.
La funci�n deber� llamarse verificarRango.
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
