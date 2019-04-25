/*Guia 4 Ejercicio 8

Con el fin de lograr un control sobre el movimiento de personas en un edificio de Catalinas se necesita registrar, para cada día del mes de marzo, cuántas personas se dirigen a cada uno de los 14 pisos de edificio. Ingresar los datos desde el teclado realizando las validaciones necesarias. Luego, emitir: 
a. Para cada piso y cada día, la cantidad de personas que ingresaron al mismo. 
b. Cantidad total de personas ingresadas al edificio durante el mes. 
c. Promedio diario de personas que ingresaron a cada piso. 
*/
#include <iostream>
using namespace std;

float ingresarPer ( float arrayTemp [31][14] );
float calcularPromedio ( float arrayTemp [31][14] );
float totalPer( float arrayTemp [31][14] );
float imprimirPer(float arrayTemp [31][14]);

int main()
{

    float  pisos [31][14];

    ingresarPer(pisos);
    imprimirPer(pisos);
    totalPer(pisos);
    calcularPromedio(pisos);
    return 0;
}

float ingresarPer ( float arrayTemp [31][14] )
{
    for (int i=1; i<2; i++ )
    {
        cout << "DEL DIA " << i << endl;
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 1 << endl;
        cin >> arrayTemp[i][0];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 2 << endl;
        cin >> arrayTemp[i][1];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 3 << endl;
        cin >> arrayTemp[i][2];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 4 << endl;
        cin >> arrayTemp[i][3];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 5 << endl;
        cin >> arrayTemp[i][4];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 6 << endl;
        cin >> arrayTemp[i][5];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 7 << endl;
        cin >> arrayTemp[i][6];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 8 << endl;
        cin >> arrayTemp[i][7];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 9 << endl;
        cin >> arrayTemp[i][8];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 10 << endl;
        cin >> arrayTemp[i][9];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 11 << endl;
        cin >> arrayTemp[i][10];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 12 << endl;
        cin >> arrayTemp[i][11];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 13 << endl;
        cin >> arrayTemp[i][12];
        cout << "Ingrese cantidad de personas que ingresaron al piso " << 14 << endl;
        cin >> arrayTemp[i][13];
    }
}

float imprimirPer(float arrayTemp [31][14])
{
    for (int i=1; i<2; i++ )
    {
        cout << "DEL DIA " << i << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 1 << " son" << endl;
        cout << arrayTemp[i][0] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 2 << " son" << endl;
        cout << arrayTemp[i][1] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 3 << " son" << endl;
        cout << arrayTemp[i][2] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 4 << " son" << endl;
        cout << arrayTemp[i][3] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 5 << " son" << endl;
        cout << arrayTemp[i][4] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 6 << " son" << endl;
        cout << arrayTemp[i][5] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 7 << " son" << endl;
        cout << arrayTemp[i][6] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 8 << " son" << endl;
        cout << arrayTemp[i][7] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 9 << " son" << endl;
        cout << arrayTemp[i][8] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 10 << " son" << endl;
        cout << arrayTemp[i][9] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 11 << " son" << endl;
        cout << arrayTemp[i][10] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 12 << " son" << endl;
        cout << arrayTemp[i][11] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 13 << " son" << endl;
        cout << arrayTemp[i][12] << endl;
        cout << "Cantidad de personas que ingresaron al piso " << 14 << " son" << endl;
        cout << arrayTemp[i][13] << endl;

    }
}

float totalPer( float arrayTemp [31][14] )
{
    int total;
    for (int i=0; i<2; i++ )
    {
        total+= arrayTemp[i][0]+arrayTemp[i][1]+arrayTemp[i][2]+arrayTemp[i][3]+arrayTemp[i][4]+arrayTemp[i][5]+
        arrayTemp[i][6]+arrayTemp[i][7]+arrayTemp[i][8]+arrayTemp[i][9]+arrayTemp[i][10]+arrayTemp[i][11]+
        arrayTemp[i][12]+arrayTemp[i][13];
    }
    cout << "El total de personas que ingresaron al piso en el mes son " << total << endl;
}

float calcularPromedio(float arrayTemp [31][14])
{
    int prom[13];
    for (int i=0; i<2; i++ )
    {
        prom[0] += arrayTemp[i][0];
        prom[1] += arrayTemp[i][1];
        prom[2] += arrayTemp[i][2];
        prom[3] += arrayTemp[i][3];
        prom[4] += arrayTemp[i][4];
        prom[5] += arrayTemp[i][5];
        prom[6] += arrayTemp[i][6];
        prom[7] += arrayTemp[i][7];
        prom[8] += arrayTemp[i][8];
        prom[9] += arrayTemp[i][9];
        prom[10] += arrayTemp[i][10];
        prom[11] += arrayTemp[i][11];
        prom[12] += arrayTemp[i][12];
        prom[13] += arrayTemp[i][13];
    }
    prom[0] = prom[0] / 31;
    prom[1] = prom[1] / 31;
    prom[2] = prom[2] / 31;
    prom[3] = prom[3] / 31;
    prom[4] = prom[4] / 31;
    prom[5] = prom[5] / 31;
    prom[6] = prom[6] / 31;
    prom[7] = prom[7] / 31;
    prom[8] = prom[8] / 31;
    prom[9] = prom[9] / 31;
    prom[10] = prom[10] / 31;
    prom[11] = prom[11] / 31;
    prom[12] = prom[12] / 31;
    prom[13] = prom[13] / 31;

    cout << "El promedio del dia " << 1 << " es " << prom[0] << endl;
    cout << "El promedio del dia " << 2 << " es " << prom[1] << endl;
    cout << "El promedio del dia " << 3 << " es " << prom[2] << endl;
    cout << "El promedio del dia " << 4 << " es " << prom[3] << endl;
    cout << "El promedio del dia " << 5 << " es " << prom[4] << endl;
    cout << "El promedio del dia " << 6 << " es " << prom[5] << endl;
    cout << "El promedio del dia " << 7 << " es " << prom[6] << endl;
    cout << "El promedio del dia " << 8 << " es " << prom[7] << endl;
    cout << "El promedio del dia " << 9 << " es " << prom[8] << endl;
    cout << "El promedio del dia " << 10 << " es " << prom[9] << endl;
    cout << "El promedio del dia " << 11 << " es " << prom[10] << endl;
    cout << "El promedio del dia " << 12 << " es " << prom[11] << endl;
    cout << "El promedio del dia " << 13 << " es " << prom[12] << endl;
    cout << "El promedio del dia " << 14 << " es " << prom[13] << endl;
}

