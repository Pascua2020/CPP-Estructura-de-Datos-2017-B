/* Guia 4 Ejercicio 6 

Una empresa quiere guardar el presentismo de sus empleados. 
Para esto, genere un programa que guarde el presentismo de un empleado en un arreglo llamado legajo12345[] , teniendo en cuenta que el mes tiene 30 días. 
Las opciones que se pueden cargar para un día son: “presente”, “ausente”, “ausente con aviso”, “ausente enfermo”, “día no laborable”. 
Inicializar cada elemento del array con “no cargado”. Esto va a servir para indicar que no se ha cargado el día consultado. 
*/

#include <iostream>
#include <cstdio>
#include <locale> //Biblioteca para poder setear caracteres con acéntos
using namespace std;


// Constantes

int const TOPE = 6; //Uso 6 para probar. Se debería porner 30

// *** Fin de Constantes ***

// Prototipo de Procedimientos

void ingresarPresentismo ( int arrayTemp [TOPE] );
void listarPresentismo ( int arrayTemp [TOPE] );
void cantidadDeAusentes (int arrayTemp [TOPE], int &cantidad );
// *** Fin de Prototipos Procedimientos ***


int main()
{
    setlocale(LC_ALL, "spanish"); // Setea tabla de caracteres con acentos

    int estadoPresentismo;  // Codificamos cada estado:
                            // presente = 1, ausente = 2, ausente con aviso = 3, ausente enfermo = 4
                            // día no laborable = 5, no cargado = 0};

    // Defino mi array y la llamo miArray
    int legajo12345[TOPE];     // Puedo inicializar toda del ingresando un solo valor
    int legajo099[TOPE];       // Puedo definir otro empleado
    int ausentes = 0;
    int totalHallados = 0;

    ingresarPresentismo ( legajo12345 );
    listarPresentismo ( legajo12345 );
    cantidadDeAusentes ( legajo12345, ausentes );

    cout <<" Se encontraron " << ausentes << " ausentes para el empleado legajo12345";
    return 0;
}

// Definición de Procedimientos
// Procedimiento para ingreso de datos

void ingresarPresentismo ( int arrayTemp [TOPE] )

{
    cout << "Recuerde ingresar: presente = 1, ausente = 2, ausente con aviso = 3, \n ausente enfermo = 4, día no laborable = 5" << endl;
    int i;
    for (i=1; i<=TOPE; i++ )
    {
        cout<<"Ingrese presentismo para el día "<< i <<": ";
        cin>>arrayTemp [i];

    }
}

void listarPresentismo ( int arrayTemp [TOPE] )
{
    // Imprimimos todo el Array
    int j;

    cout<<endl<<"Esto es lo que hay guardado en el Array"<<endl;

    for (j=1; j<= TOPE; j++ )
    {

        cout<< arrayTemp [j] << " ";
    }
    cout << endl;
}

void cantidadDeAusentes (int arrayTemp [TOPE], int &cantidad )
{
    int k;

    for (k=1; k<= TOPE; k++ )
    {
        if ( arrayTemp [k] > 1 && arrayTemp [k] < 5 )
        {
            cantidad++;
        }
    }
}

// *** Fin de Procedimientos ***

