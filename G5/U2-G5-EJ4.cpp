/*Guia 5 Ejercicio 4

Se desea crear un programa para almacenar los art�culos de un negocio. 
Escriba una secci�n de declaraci�n de clase llamada Articulo que tenga miembros de datos del tipo cadena de caracteres 
llamados marca, descripcion y miembros de datos en n�mero entero llamado cantidad y un miembro de datos en n�mero real llamado precio. 
Incluya un prototipo para un constructor, la definici�n del constructor, una funci�n miembro llamada mostrarDatos() que pueda usarse para desplegar 
todos los valores de los miembros. 

Realice m�todos (funciones miembro) para recuperar y otros para asignar cada uno de los atributos (miembros datos). 
Por ejemplo: getMarca, getModelo, setCantidadDeMotores, setPrecio. (en general se utilizan las palabra get para recuperar y set para asignar, del ingl�s). 
Incluya las secciones de declaraci�n e implementaci�n de clase en un programa funcional completo. 

Cree un Array de 10 (diez) Objetos del tipo Articulo. La posici�n 0 corresponder� al n�mero de Art�culo 0, la posici�n 1 al n�mero de Art�culo 1, etc. 
Cree un nuevo m�todo para calcular el precio con IVA. Al m�todo de le pasar� el n�mero de art�culo al cu�l se le quiere calcular el precio con IVA. 
Utilice �ste m�todo en el programa para ver su funcionamiento 
*/
#include <iostream>
using namespace std;

class Articulo{
private:
string marca;
string descripcion;
int cantidad;
float precio;
public:
Articulo(string = "a",string = "b",int = 50,float = 100);
void mostrarDatos();
void getMarca();
void getDescripcion();
void setCantidad(int a);
void setPrecio(float a);
void iva();
};

Articulo::Articulo(string a,string b,int c,float d)
{
    marca = a;
    descripcion = b;
    cantidad = c;
    precio = d;
}

void Articulo::mostrarDatos()
{
cout << "Los datos de marca,descripcion,cantidad y precio son" << endl;
cout << marca << "," << descripcion << "," << cantidad << "," << precio << endl;
}

void Articulo::getMarca()
{
    cout << "La marca es " << marca << endl;
}

void Articulo::getDescripcion()
{
    cout << "La descripcion es " << descripcion << endl;
}

void Articulo::setCantidad(int a)
{
    cantidad = a;
}

void Articulo::setPrecio(float a)
{
    precio = a;
}

void Articulo::iva()
{
    float extra = precio / 100 * 21;
    precio = precio + extra;
    cout << "El precio con iva es " << precio << endl;
}


int main()
{
    Articulo a1[10];
    a1[0].mostrarDatos();
    a1[1].setCantidad(300);
    a1[1].setPrecio(300);
    a1[1].mostrarDatos();
    a1[1].iva();
}

