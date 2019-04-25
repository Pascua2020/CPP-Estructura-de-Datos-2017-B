/* Guia 4 Ejercicio 3 

Basándose en el ejercicio 2 modificarlo para que el programa le pida al usuario las 7 temperaturas. 
Luego de verificar que funciona correctamente, genere una función que realice la suma de todas las temperaturas y devuelva dicho valor. 
En el programa principal hacer uso de esas dos funciones y exhibir: 
Las temperaturas de cada día 
El promedio semanal La suma de todas las temperaturas 
*/

#include <iostream>
using namespace std;


// Constantes

int const TOPE = 8;

// *** Fin de Constantes ***

// Prototipo de Procedimientos

   void ingresarTemperatura ( float arrayTemp [TOPE] );
   float calcularPromedio ( float arrayTemp [TOPE] );
   void mostrarTemperatura ( float arrayTemp [TOPE]);

// *** Fin de Prototipos Procedimientos ***


int main()
{
    float Temperatura [TOPE];
    ingresarTemperatura(Temperatura);

    cout<< "El promedio de Temperatura es: " << calcularPromedio(Temperatura) << endl;
    mostrarTemperatura(Temperatura);
    return 0;
}

// Definición de Procedimientos
// Procedimiento para ingreso de datos

void ingresarTemperatura ( float arrayTemp [TOPE] )

{
    int i;
    for (i=1; i<TOPE; i++ )
    {
        cout<<"Ingrese la temperatura para el dia "<< i <<": ";
        cin>>arrayTemp [i];     // No se está utilizando la posición 0 del Array
    }
}

float calcularPromedio ( float arrayTemp [TOPE] )
{
    int i;
    float suma = 0;
    for (i=1; i<TOPE; i++ )
    {
        suma = suma + arrayTemp [i];    // No se está utilizando la posición 0 del Array
    }
    cout << "La suma de todas las temperaturas es " << suma << endl;
    return suma / (TOPE-1);
}

void mostrarTemperatura(float arrayTemp [TOPE]){

int i;
for (i=1; i<TOPE; i++ )
{
    cout<<"Temperatura del dia "<< i <<": " << arrayTemp[i] << endl;
}
}

// *** Fin de Procedimientos ***

