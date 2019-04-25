/*Guia 4 Ejercicio 12

Se desea realizar un estudio estadístico sobre los clientes que asisten durante un mes a una sucursal de un banco. 
Los clientes se clasifican en: Pyme, VIP, Estándar. Se desea saber la cantidad de clientes de cada tipo que asisten por día. 
Para esto se toman los datos de los clientes durante un mes (para simplificar utilizar 30 días). 

1) Diagramar una estructura de datos que permita almacenar los datos del problema. Realizar un esquema de la estructura en el caso que sea necesario. 
Declarar la estructura correspondiente en C++. 
2) Codificar en C++ una función o procedimiento que busque el tipo de cliente menos vendida en un día del mes y devuelva la cantidad y el tipo de cliente 
encontrado. 
3) Codificar en C++ la invocación de la función y/o procedimiento realizado y exhibir los datos pedidos en el punto 2. 
*/
#include <iostream>
using namespace std;

float ingresarClientes ( float arrayTemp[30][3]);
float menosVendido ( float a,float arrayTemp[30][3]);
float mostrarDatos ( float arrayTemp[30][3] );

int main()
{
    float clientes[30][3];
    ingresarClientes(clientes);
    mostrarDatos(clientes);
    menosVendido(1,clientes);
    return 0;
}

float ingresarClientes( float arrayTemp[30][3] )
{
    float a,b,c;
    for(int i=0; i<2; i++ ){
    cout << "Ingrese la cantidad de clientes Pyme" << endl;
    cin >> a;
    arrayTemp[i][0] = a;
    cout << "Ingrese la cantidad de clientes VIP" << endl;
    cin >> b;
    arrayTemp[i][1] = b;
    cout << "Ingrese la cantidad de clientes Estandar" << endl;
    cin >> c;
    arrayTemp[i][2] = c;
    }
}

float mostrarDatos ( float arrayTemp[30][3] )
{
    for(int i=0; i<2; i++ ){
    cout << "la cantidad de clientes Pyme es " << arrayTemp[i][0] << endl;
    cout << "la cantidad de clientes VIP es " << arrayTemp[i][1] << endl;
    cout << "la cantidad de clientes Estandar es " << arrayTemp[i][2] << endl;
    }
}

float menosVendido ( float a,float arrayTemp[30][3])
{
    float m=a;
    float b=0;
    b = arrayTemp[0][0];
    float c=0;
    c = arrayTemp[0][1];
    float d=0;
    d = arrayTemp[0][2];

    if(c>b && d>b)
    {
        cout << "El cliente menos vendido es el Pyme con " << arrayTemp[0][0];
    }
    else if(b>c && d>c)
    {
        cout << "El cliente menos vendido es el VIP con " << arrayTemp[0][1];
    }
    else if(b>d && c>d)
    {
        cout << "El cliente menos vendido es el Estandar con " << arrayTemp[0][2];
    }
}

