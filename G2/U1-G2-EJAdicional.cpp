/* Guia 2 Ejercicio Adicional
Se desea calcular la cantidad de pintura necesaria para pintar un departamento.
Para esto se deberá realizar un programa que permita realizar el cálculo.

Pedir al usuario los siguientes ingresos:
1-Cantidad de ambientes del departamento o casa (1, 2, 3 o 4 ambientes).
2-Pedir para cada ambiente el largo y ancho expresado en metros.
Suponer:
 -Que no se pintan el baño, lavadero ni cocina. (para simplificar).
 -Altura de todos los techos es: 2,5 metros.
 -Se utiliza el mismo color de pintura para todas las habitaciones.
  El rendimiento de la pintura es de 8.5m2 /litro.
 -Se realizan dos manos de pintura.

El programa debe indicar la totalidad de metros cuadrados a pintar.
Cantidad de litros de pintura que hay que comprar.
*/
#include <iostream>
using namespace std;

int ingresoCantidadHabitaciones(int num);
float ingresoMedidasHabitaciones(float largo,float ancho);
float calculoMetrosHabitacion(float ancho,float largo,float alto);
float calculoLitrosPintura(float metrosTotales);
void exhibirResultados(float metrosCuadrados,float bbb,float litrosPintura);

int main()
{
int dep=0;
float largo=0;
float ancho=0;
float metrosTotales=0;
float pintura=0;

cout << "ingrese cantidad de ambientes del departamento" << endl;
cin >> dep;

ingresoCantidadHabitaciones(dep); // EJ : 1

largo,ancho= ingresoMedidasHabitaciones(largo,ancho);

metrosTotales = calculoMetrosHabitacion(largo,ancho,2.5);

pintura = calculoLitrosPintura(metrosTotales);

exhibirResultados(metrosTotales,pintura,8.5);

cout << "-----------------" << endl;
cout << "dep : " << dep << endl;
cout << "largo : " << largo << endl;
cout << "ancho : " << ancho << endl;
cout << "metrosTotales : " << metrosTotales << endl;
cout << "pintura : " << pintura << endl;

return 0;
}

int ingresoCantidadHabitaciones(int num)
{
    cout << endl << "-METODO A ingresoCantidadHabitaciones"  << endl << endl;
    while(num !=1 && num !=2 && num !=3 && num !=4)
    {
        cout << "ingrese un numero correcto" << endl;
        cin >> num;
    }
    cout << "Son " << num << " habitaciones" << endl << endl;
    return num;
}

float ingresoMedidasHabitaciones(float largo,float ancho)
{
cout << "-METODO B ingresoMedidasHabitaciones"  << endl << endl;
cout << "ingrese largo del departamento" << endl;
cin >> largo;
cout << "ingrese ancho del departamento" << endl;
cin >> ancho;
cout << "el largo es " << largo << endl;
cout << "el ancho es " << ancho << endl;
return largo,ancho;
}

float calculoMetrosHabitacion(float ancho,float largo,float alto)
{
cout << endl << "-METODO C calculoMetrosHabitacion"  << endl << endl;
float metrosTotales = ancho * largo * alto;
cout << "Los metros totales son " << metrosTotales << endl;
return metrosTotales;
}

float calculoLitrosPintura(float metrosTotales)
{
    cout << endl << "-METODO D calculoLitrosPintura"  << endl << endl;
    float pintura = metrosTotales / 8.5;
    cout << "Litros de pintura a comprar son " << pintura << endl;
    return pintura;
}

void exhibirResultados(float metrosCuadrados,float bbb,float litrosPintura)
{
    cout << endl << "-METODO E exhibirResultados"  << endl << endl;
    cout << "Metros cuadrados a pintar son " << metrosCuadrados << endl;
    cout << "Litros de pintura a comprar " << litrosPintura << endl;
}
