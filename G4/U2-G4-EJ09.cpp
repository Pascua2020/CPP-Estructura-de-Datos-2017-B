/*Guia 4 Ejercicio 9

En una fábrica dónde se producen helados, se desea saber el peso promedio de los envases de 5kg que producen. 
Para esto, un empleado toma una muestra de 100 envases por día y se realiza un promedio del peso de los helados producidos. 

1) Definir una estructura de datos para poder almacenar los 100 valores de las muestras. Codificar la estructura de datos en C++. 

2) Codificar en C++ una función o procedimiento de manera tal que devuelva un valor verdadero si el promedio es mayor o igual a 
5Kg y un valor falso si es menor que 5kg. La función o procedimiento debe recibir como entrada el promedio de las 100 muestras que se calculó en otra función. 

3) Codificar en C++ la invocación de la función y/o procedimiento realizado y exhibir los datos pedidos en el punto 2. 
*/
#include <iostream>
using namespace std;

float ingresarEnv ( float arrayTemp [100] );
float prom(float arrayTemp[100]);
bool comprobar(float prom);

int main()
{
    float envases [100];
    ingresarEnv(envases);
    float promedio = prom(envases);
    cout << comprobar(promedio) << endl;
    return 0;
}

float ingresarEnv ( float arrayTemp [100] )
{
    for (int i=0; i<3; i++ )
    {
        cout << "Ingrese muestra del envase Nº" << i+1 << endl;
        cin >> arrayTemp[i];
    }
}

float prom(float arrayTemp[100])
{
    float total;
    for (int i=0; i<3; i++ )
    {
        total += arrayTemp[i];
    }
    total = total / 100;
    return total;
}

bool comprobar(float prom)
{
if(prom < 5)
{
    cout << "El promedio es menor a 5kg" << endl;
    return false;
}
else if(prom >= 5)
{
    cout << "El promedio es igual o mayor a 5kg" << endl;
    return true;
}
}

