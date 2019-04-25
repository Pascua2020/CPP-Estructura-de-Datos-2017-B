/*Guia 5 Ejercicio 2

Escriba una sección de declaración de clase llamada Sistema que tenga miembros de datos del tipo cadena de caracteres llamados computadora, 
impresora y pantalla y miembros de datos en número de precisión doble llamados precioComp, precioImpr y precioPant. 

Incluya un prototipo para un constructor, la definición del constructor y una función miembro llamada mostrarDatos() que pueda usarse para desplegar 
los valores de los miembros. 

Incluya las secciones de declaración e implementación de clase en un programa funcional completo. 
Instancie un Objeto miSistema1 mediante el constructor. Utilice valores según criterio propio para los miembros datos. 
Luego utilice el método apropiado para mostrar los datos de miSistema1. 
*/
#include <iostream>
using namespace std;

class Sistema{
private:
string computadora;
string impresora;
string pantalla;

double precioComp;
double precioImpr;
double precioPant;

public:
Sistema(string = "PC",string = "Color",string = "HD",double = 50,double = 100,double = 200);
void mostrarDatos();
};

Sistema::Sistema(string a,string b,string c,double d,double e,double f)
{
computadora = a;
impresora = b;
pantalla = c;
precioComp = d;
precioImpr = e;
precioPant = f;
}

void Sistema::mostrarDatos()
{
    cout << "Los valores de computadora,impresora,pantalla,precioComp,precioImpr y precioPant son" << endl;
    cout << computadora << "," << impresora << "," << pantalla << "," << precioComp << "," << precioImpr << "," << precioPant <<  endl;
}

int main()
{
Sistema s1;
s1.mostrarDatos();
Sistema s2("a","b","c",1,2,3);
s2.mostrarDatos();
return 0;
}

