/* Guia 2 Ejercicio 9
Queremos comprar una computadora nueva y nos gustaría saber cuánto nos va a salir.
Sabemos que:
Los monitores cuestan $60 por cada pulgada.
La memoria cuesta $260 por cada GB.

El precio base estimado del resto de los componentes es de $6000.

Escribí un procedimiento llamado cuantoCuesta que tome el número de pulgadas del monitor y
la cantidad de memoria, y calcule el costo de nuestra computadora.
Además el procedimiento debe informar el costo de cada cuota si la computadora se compra con 12 cuotas.
*/
#include <iostream>
using namespace std;

float a;
float b;
float cuantoCuesta(float a,float b,float c,float d);
float valorCompu;
float valorCuota;
int main() {

cout << "ingrese el numero de pulgadas" << endl;
cin >> a;
cout << "ingrese cantidad de memoria" << endl;
cin >> b;
cuantoCuesta(a,b,valorCompu,valorCuota);

return 0;
}

float cuantoCuesta(float a,float b,float c,float d){
c = a * b;
d = c / 12;
cout << "el costo de la computadora es : $" << c << endl;
cout << "el costo de la computadora en 12 cuotas es : $" << d << endl;
return a,b,c,d;
}
