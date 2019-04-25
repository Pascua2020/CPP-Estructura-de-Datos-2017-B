/*Guia 5 Ejercicio 1

a) Construya una clase llamada Rectangulo que tenga miembros de datos en n�mero de precisi�n doble llamados largo y ancho. 
La clase deber� tener una funci�n miembro llamada perimetro() y area() para calcular el per�metro y el �rea de un rect�ngulo, 
una funci�n miembro llamada asignarValores() para asignar el largo y ancho de los rect�ngulos y una funci�n miembro llamada mostrarDatos() 
que despliegue el largo y ancho. Utilizar como base el ejemplo visto en clase. 

b) Incluya la clase Rectangulo dentro de un programa en C++ funcional. Cree un objeto rect1, as�gnele los valores 12.5 para el largo y 4.5 para el ancho. 
Verifique que el objeto tiene los valores asignados realizando la llama a mostrarDatos(). 

c) Utilizar los m�todos perimetro() y area() dentro del programa principal para calcular el per�metro y el �rea. 

d) Complete la clase Rectangulo con el Constructor del ejemplo. Instancie un objeto nuevo rect2 con los valores 22.0 y 8.5 (largo y ancho). 
Para ello utilice la siguiente sentencia: Rectangulo rect2 (22.0, 8.5); Verifique que el objeto rect2 tenga los valores correctos de largo y 
ancho utilizando el m�todo mostrarDatos(). 

e) Crear un m�todo nuevo llamado mostrarDatosExtendido() para que muestre el largo, ancho, �rea y per�metro del rect�ngulo. 
Utilizar el m�todo nuevo en el programa principal aplic�ndolo a los dos rect�ngulos creados. 
Intente utilizar los m�todos ya creados: mostrarDatos(), perimetro() y area() dentro del nuevo m�todo. 
*/
#include <iostream>
using namespace std;

class Rectangulo{
private:
double largo;
double ancho;
public:
Rectangulo (float = 34.0, float = 5.0);
double perimetro();
double area();
double estDatos(float a,float b);
double mostrarDatos();
double mostrarDatosExtendido();
};

Rectangulo::Rectangulo (float lar, float anch) // Implementaci�n del Constructor
{     largo = lar;
     ancho = anch;
}

double Rectangulo::perimetro()
{
    double c=largo*2+ancho*2;
    cout << " El perimetro es " << c << endl;
}

double Rectangulo::area()
{
    double c=largo*ancho;
    cout << " El area es " << c << endl;
}

double Rectangulo::estDatos(float a,float b)
{
    largo = a;
    ancho = b;
}

double Rectangulo::mostrarDatos()
{
    cout << " El largo es " << largo << endl;
    cout << " El ancho es " << ancho << endl;
}

double Rectangulo::mostrarDatosExtendido()
{
    cout << "--" << endl;
    mostrarDatos();
    area();
    perimetro();
}

int main()
{
    Rectangulo r1;
    r1.perimetro();
    r1.area();
    r1.estDatos(12.5,4.5);
    r1.mostrarDatos();
    Rectangulo rect2 (22.0, 8.5);
    rect2.mostrarDatos();
    r1.mostrarDatosExtendido();
    rect2.mostrarDatosExtendido();

return 0;
}

