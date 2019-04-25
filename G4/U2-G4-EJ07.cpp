/*Guia 4 Ejercicio 7

Como haría para realizar un programa que tiene que almacenar la temperatura y presión atmosférica de cada día de un solo mes? 
Escriba las definiciones de las variables, las funciones y/o procedimientos para exhibir los datos y realizar un promedio de los mismos. 
*/
#include <iostream>
using namespace std;

float ingresarTemp ( float arrayTemp [31][2] );
float calcularPromedio ( float arrayTemp [31][2] );
float imprimirTemp(float arrayTemp [31][2]);

int main()
{

    float  Temperatura [31][2];

    ingresarTemp(Temperatura);
    imprimirTemp(Temperatura);
    calcularPromedio(Temperatura);
    return 0;
}

float ingresarTemp ( float arrayTemp [31][2] )
{
    for (int i=1; i<31; i++ )
    {
        cout << "Ingrese temperatura del dia " << i << endl;
        cin >> arrayTemp[i][0];
        cout << "Ingrese presion atmosferica del dia " << i << endl;
        cin >> arrayTemp[i][1];
    }
}

float calcularPromedio(float arrayTemp [31][2])
{
    float prom1;
    float prom2;
    for (int i=0; i<30; i++ )
    {
        prom1+=arrayTemp[i][0];
        prom2+=arrayTemp[i][1];
    }
    cout << "El promedio de la temperatura es " << prom1 / 31 <<  endl;
    cout << "El promedio de la presion atmosferica es " << prom2 / 31 << endl;
}

float imprimirTemp(float arrayTemp [31][2])
{
    for (int i=0; i<30; i++ )
    {
        cout << "temperatura del dia " << i+1 << endl;
        cout << arrayTemp[i+1][0] << endl;
        cout << "presion atmosferica del dia " << i+1 << endl;
        cout << arrayTemp[i+1][1] << endl;
    }
}

