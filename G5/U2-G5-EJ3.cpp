/*Guia 5 Ejercicio 3

Intenten lo siguiente con la clase Avion en el programa principal: Avion misAviones[3]; 
//un array con tres objetos Avion 
Cout << misAviones[0].getPrecio(); //se muestra el precio del Avion almacenado en la primer posición del Array 

Consigna: Cambiar el ejercicio 3 para crear 10 objetos Avion que estén almacenados en un Array de Objetos. 

Se desea ingresar los siguientes datos para tres Aviones. 
Marca Modelo Pasajeros 
Airbus A340 300 
Airbus A350 350 
Airbus A380 555 
Luego, se deben exhibir los datos de los tres aviones. 
Por último, indicar cuál de los tres aviones es el que soporta mayor capacidad de pasajeros. (se deberá leer la cantidad de pasajeros que transporta cada avion). Crear un método nuevo para que el usuario ingrese los atributos requeridos del avion. 
*/
//Con array

#include <iostream>
#include <string>
using namespace std;

class Avion{
private:
string marca;
string modelo;
int cantidadDeMotores;
int cantidadDePasajeros;
float precio;
public:
Avion(string = "1",string = "2",int = 10,int = 20,float = 400);
void mostrarDatos();
void getMarca();
void getModelo();
void setCantidadDeMotores(int a);
void setPrecio(float a);
float getPrecio();
void setMarca(string a);
void setModelo(string a);
void setCantidadPasajeros(int a);
int getCantidadPasajeros();
string devolverModelo();
void ingresarAtributos();
};

Avion::Avion(string a,string b,int c,int d,float e)
{
marca = a;
modelo = b;
cantidadDeMotores = c;
cantidadDePasajeros = d;
precio = e;
}

void Avion::mostrarDatos()
{
    cout << "Los valores de marca,modelo,motores,pasajeros y precio son" << endl;
    cout << marca << "," << modelo << "," << cantidadDeMotores << "," << cantidadDePasajeros << "," << precio << endl;
}

void Avion::getMarca()
{
    cout << "La marca es " << marca << endl;
}

void Avion::getModelo()
{
    cout << "El modelo es " << modelo << endl;
}

void Avion::setCantidadDeMotores(int a)
{
    cantidadDeMotores = a;
}

void Avion::setPrecio(float a)
{
    precio = a;
}

float Avion::getPrecio(){
    return precio;
}

void Avion::setMarca(string a){
    marca = a;
}

void Avion::setModelo(string a){
    modelo = a;
}

void Avion::setCantidadPasajeros(int a){
    cantidadDePasajeros = a;
}

int Avion::getCantidadPasajeros(){
    return cantidadDePasajeros;
}

std::string Avion::devolverModelo(){
    return modelo;
}

void Avion::ingresarAtributos()
{
string a;
string b;
int c,d;
float e;
cout << "Ingrese la marca,el modelo,la cantidad de motores,la cantidad de pasajeros y el precio " << endl;
cin >> a;
marca = a;
cin >> b;
modelo = b;
cin >> c;
marca = cantidadDeMotores;
cin >> d;
marca = cantidadDePasajeros;
cin >> e;
precio = e;
}

int main()
{
    Avion misAviones[10];
    //cout << misAviones[0].getPrecio();
    misAviones[0].setMarca("Airbus");
    misAviones[0].setModelo("A340");
    misAviones[0].setCantidadPasajeros(300);
    misAviones[1].setMarca("Airbus");
    misAviones[1].setModelo("A350");
    misAviones[1].setCantidadPasajeros(350);
    misAviones[2].setMarca("Airbus");
    misAviones[2].setModelo("A380");
    misAviones[2].setCantidadPasajeros(555);
    float a = misAviones[0].getCantidadPasajeros();
    float b = misAviones[1].getCantidadPasajeros();
    float c = misAviones[2].getCantidadPasajeros();
    if(a<c && b<c)
    {
        cout << misAviones[2].devolverModelo() << " es el avion con mayor cantidad de pasajeros" << endl;
    }
    else if(a<b && c<b)
    {
        cout << misAviones[1].devolverModelo() << " es el avion con mayor cantidad de pasajeros" << endl;
    }
    else if(c<a && b<a)
    {
        cout << misAviones[0].devolverModelo() << " es el avion con mayor cantidad de pasajeros" << endl;
    }
    for (int i=0; i<3; i++ )
    {
        misAviones[i].mostrarDatos();
    }
    misAviones[3].ingresarAtributos();
    misAviones[3].mostrarDatos();
}

