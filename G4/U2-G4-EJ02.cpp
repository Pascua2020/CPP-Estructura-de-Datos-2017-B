/* Guia 4 Ejercicio 2

Realizar un programa que utilice un vector temperatura de 7 elementos para almacenar las temperaturas de los d�as de una semana. 
Inicialice al vector temperatura con las temperaturas {21.3, 22.2, 32.1, 18.9, 20.0, 17.5, 19.7} 
(esto es para no tener que ingresar las temperaturas por teclado). 
Realizar una funci�n que calcule el promedio de las temperaturas y devuelva dicho promedio como salida de la funci�n. 
El programa debe imprimir en pantalla las temperaturas de cada d�a y el promedio semanal. 
*/

#include <iostream>
using namespace std;


// Constantes

int const TOPE = 8;

// *** Fin de Constantes ***

// Prototipo de Procedimientos

   float calcularPromedio ( float arrayTemp [TOPE] );

// *** Fin de Prototipos Procedimientos ***


int main()
{

    float  Temperatura [TOPE] =  {21.3, 22.2, 32.1, 18.9, 20.0, 17.5, 19.7};

    cout<< "El promedio de Temp es: " << calcularPromedio(Temperatura);

    return 0;
}

// Definici�n de Procedimientos

float calcularPromedio ( float arrayTemp [TOPE] )
{
    int i;
    float suma = 0;
    for (i=1; i<TOPE; i++ )
    {
        suma = suma + arrayTemp [i]; // No se est� utilizando la posici�n 0 del Array
    }
    return suma / (TOPE-1);
}

// *** Fin de Procedimientos ***

