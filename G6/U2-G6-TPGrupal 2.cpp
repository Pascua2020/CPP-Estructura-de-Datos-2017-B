/* Guia 6 – Trabajo Grupal 2

Ud. pertenece a una empresa que realiza estudios de mercado. 
Se le pide que realice un programa que permita almacenar y procesar un tipo específico de encuesta. 
Detalle de la encuesta Pedida: 
Nombre de la encuesta: en1823CJ 
Población de la muestra: personas entre 18 y 23 años 
Tamaño de la muestra: 500 

Preguntas a realizar: 
Cuál es su comida favorita? [Se deberá seleccionar de la siguiente lista] 
Pizza, Hamburguesa, Milanesa, Fideos, Pezcado, Ensalada (cualquier tipo), Empanada, otra. 

Cuál es su juego favorito? [Se deberá seleccionar de la siguiente lista] 
Cartas (cualquier tipo), Juego de Mesa (cualquier tipo), Video Juegos (cualquier tipo), Deportes, otro. 

Datos a elaborar de la encuesta: Cantidad de ocurrencias de cada una de las comidas. Cantidad de ocurrencias de cada una de los juegos. 

Mostrar los resultados en forma descendente. 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class Sujeto
{
    int comida;
    int juego;
public:
    Sujeto(int com = 0, int jue = 0);
    void realizarEncuesta(); // Escrita por Lucas Leyton
    void mostrarResultados(); // Escrita por Gonzalo Escudero
   // ordenarComida();
   // ordenarJuegos();
   // analizarResultados();
 };

 int contador[13];

 // Programa principal
int main()
{
    int encuestados;
    cout<<"ingrese la cantidad de personas a encuestar"<<endl;
    cin>>encuestados;
    system("cls");
    Sujeto encuesta[encuestados]; // se realiza un array con la cantidad de personas a encuestar
    for (int i = 0 ; i < encuestados ; i++)
    {
        encuesta[i].realizarEncuesta(); // se realiza la encuesta a cada persona
    }
        encuesta[0].mostrarResultados();

}

// Constructor
Sujeto::Sujeto(int com , int jue )
{
    comida=com;
    juego=jue;
}

void Sujeto::realizarEncuesta()
{
    int eleccion1 , eleccion2;
    cout<<" Cual es su comida favorita?"<< endl;//lista para que el encustado realize su eleccion
    cout<<"1 - Pizza"<<endl;
    cout<<"2 - Hamburguesa"<<endl;
    cout<<"3 - Milanesa"<<endl;
    cout<<"4 - Fideos"<<endl;
    cout<<"5 - Pescado"<<endl;
    cout<<"6 - Ensalada (cualquier tipo)"<<endl;
    cout<<"7 -  Empanada"<<endl;
    cout<<"8 - otra"<<endl;
    cin>>eleccion1;   // se almacena la eleccion en una variable;
    if (eleccion1 == 1)
    {
        contador[0] += 1;
    }
    else if (eleccion1 == 2)
    {
        contador[1] += 1;
    }
    else if (eleccion1 == 3)
    {
        contador[2] += 1;
    }
    else if (eleccion1 == 4)
    {
        contador[3] += 1;
    }
    else if (eleccion1 == 5)
    {
        contador[4] += 1;
    }
    else if (eleccion1 == 6)
    {
        contador[5] += 1;
    }
    else if (eleccion1 == 7)
    {
        contador[6] += 1;
    }
    else if (eleccion1 == 8)
    {
        contador[7] += 1;
    }


    while(eleccion1<1 || eleccion1>8)  // se valida la eleccion del encuestado
   {
       cout<< "Eleccion incorrecta : ingrese un valor correcto" <<endl;
       cin>>eleccion1;
   }
        system("cls");

    cout<<" Cual es su juego favorito?"<< endl;//lista para que el encustado realize su eleccion
    cout<<"1 - Cartas (cualquier tipo)"<<endl;
    cout<<"2 - Juego de Mesa (cualquier tipo)"<<endl;
    cout<<"3 - Video Juegos (cualquier tipo)"<<endl;
    cout<<"4 - Deportes"<<endl;
    cout<<"5 - otro"<<endl;
    cin>>eleccion2;

    if (eleccion1 == 1)
    {
        contador[8] += 1;
    }
    else if (eleccion1 == 2)
    {
        contador[9] += 1;
    }
    else if (eleccion1 == 3)
    {
        contador[10] += 1;
    }
    else if (eleccion1 == 4)
    {
        contador[11] += 1;
    }
    else if (eleccion1 == 5)
    {
        contador[12] += 1;
    }
    while(eleccion2<1 || eleccion2>5)   // se valida la eleccion del encuestado
   {
       cout<< "Eleccion incorrecta : ingrese un valor correcto" <<endl;
       cin>>eleccion2;
   }

        system("cls");

    comida = eleccion1;  // se almacena la eleccion en la posicion correspondiente del array
    juego = eleccion2;
}

void Sujeto::mostrarResultados()
{
        cout<<" Cantidad de personas que eligieron como comida favorita:"<< endl;
    cout<<"1 - Pizza:"<< contador[0] << endl;
    cout<<"2 - Hamburguesa:"<< contador[1] << endl;
    cout<<"3 - Milanesa:"<< contador[2] <<endl;
    cout<<"4 - Fideos:"<< contador[3] <<endl;
    cout<<"5 - Pescado:"<< contador[4] <<endl;
    cout<<"6 - Ensalada (cualquier tipo):"<< contador[5] <<endl;
    cout<<"7 -  Empanada:"<< contador[6] <<endl;
    cout<<"8 - otra:"<< contador[7] <<endl;

    cout<<" Cantidad de personas que eligieron como juego favorito:"<< endl;
    cout<<"1 - Cartas (cualquier tipo):"<< contador[8] <<endl;
    cout<<"2 - Juego de Mesa (cualquier tipo):"<< contador[9] <<endl;
    cout<<"3 - Video Juegos (cualquier tipo):"<< contador[10] <<endl;
    cout<<"4 - Deportes:"<< contador[11] <<endl;
    cout<<"5 - otro:"<< contador[12] <<endl;

}

