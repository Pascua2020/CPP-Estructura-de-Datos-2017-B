/*Guia 4 Ejercicio 11

En una fábrica dónde se producen gaseosas de 2,25 litros, para poder saber si la máquina de llenado funciona correctamente, 
un empleado toma 250 muestras de gaseosas por día y se realiza un promedio con los valores medidos. 

1) Definir una estructura de datos para poder almacenar los 250 valores de las muestras. Codificar la estructura de datos en C++. 
2) Codificar en C++ una función o procedimiento de manera tal que devuelva el valor del promedio de las 250 muestras. 
3) Codificar en C++ la invocación de la función y/o procedimiento realizado y exhibir los datos pedidos en el punto 2. 
*/

#include <iostream>
using namespace std;

float ingresarGaseosas ( float arrayTemp[250]);
float calcularPromedio ( float arrayTemp [250] );

int main()
{

    float gaseosas [250];
    ingresarGaseosas(gaseosas);
    calcularPromedio(gaseosas);
    return 0;
}

float ingresarGaseosas ( float arrayTemp[250]){
for (int i=0; i<2; i++ )
    {
    cout << "Ingrese los litros del dia " << i+1 << endl;
    cin >> arrayTemp[i];
    }

}

float calcularPromedio ( float arrayTemp [250] ){
float total;
for (int i=0; i<2; i++ )
    {
    total+= arrayTemp[i];
    }
    total = total / 250;
    cout << "El promedio es " << total << endl;
}

