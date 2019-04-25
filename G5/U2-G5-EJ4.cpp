/*Guia 5 Ejercicio 4

Se desea crear un programa para almacenar los artículos de un negocio. 
Escriba una sección de declaración de clase llamada Articulo que tenga miembros de datos del tipo cadena de caracteres 
llamados marca, descripcion y miembros de datos en número entero llamado cantidad y un miembro de datos en número real llamado precio. 
Incluya un prototipo para un constructor, la definición del constructor, una función miembro llamada mostrarDatos() que pueda usarse para desplegar 
todos los valores de los miembros. 

Realice métodos (funciones miembro) para recuperar y otros para asignar cada uno de los atributos (miembros datos). 
Por ejemplo: getMarca, getModelo, setCantidadDeMotores, setPrecio. (en general se utilizan las palabra get para recuperar y set para asignar, del inglés). 
Incluya las secciones de declaración e implementación de clase en un programa funcional completo. 

Cree un Array de 10 (diez) Objetos del tipo Articulo. La posición 0 corresponderá al número de Artículo 0, la posición 1 al número de Artículo 1, etc. 
Cree un nuevo método para calcular el precio con IVA. Al método de le pasará el número de artículo al cuál se le quiere calcular el precio con IVA. 
Utilice éste método en el programa para ver su funcionamiento 
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

