/*Guia 4 Ejercicio 5

Modificar el ejercicio anterior. Utilizar un procedimiento en lugar de la función. 
Al procedimiento mayorVenta() se le debe pasar el array empanadasVendidas[] y deberá devolver: 
? El número de día de mayor venta. 
? La cantidad vendida ése día. 
*/
#include <iostream>
using namespace std;

void masEmpanadasVendidas(float arrayTemp[31]);
void imprimirVentas(float arrayTemp[31]);
void promedioVentas(float arrayTemp[31]);
void menorVenta(float arrayTemp[31]);

int main()
{
float empanadasVendidas[31] = {100100, 1000, 46, 26, 482, 620, 324, 94, 32, 14, 65, 503, 720, 234, 48, 21
, 54, 79, 89, 365, 621, 100,  832, 849, 30, 27, 44, 73, 300, 100, 20000};
masEmpanadasVendidas(empanadasVendidas);
imprimirVentas(empanadasVendidas);
promedioVentas(empanadasVendidas);
menorVenta(empanadasVendidas);
return 0;
}

void masEmpanadasVendidas(float arrayTemp[31])
{
    float temp = 0;
    float dia = 0;
    float dia2 = 0;
    int i;
    for (i=0; i<=31; i++ )
    {
        dia+= 1;
        if(arrayTemp[i]>temp){
            temp = arrayTemp[i];
            dia2 = i;}
        else{
            dia=dia2;}
    }
    cout << "El dia del mes que vendio mas empanadas es el dia " << dia+1 << endl;
    cout << "Se vendieron " << temp << " empanadas." << endl;
}

void imprimirVentas(float arrayTemp[31])
{
int i;
    for (i=0; i<=30; i++ )
    {
        cout << "Dia " << i+1 << " Ventas " << arrayTemp[i] << endl;
    }
}
void promedioVentas(float arrayTemp[31])
{
    int i;
    float suma = 0;
    for (i=0; i<=30; i++ )
    {
        suma = suma + arrayTemp[i];
    }
    cout << "El promedio es " << suma / 31 << endl;
}
void menorVenta(float arrayTemp[31])
{
    float temp = 0;
    float temp2 = 0;
    float dia = 0;
    float dia2 = 0;
    int i;
    for (i=0; i<=31; i++ )
    {
        temp = arrayTemp[i];
        dia+= 1;

        if((arrayTemp[i] > arrayTemp[i+1]))
        {
            temp2=arrayTemp[i+1];
        }

    }
    cout << "El dia del mes que vendio menos empanadas es el dia " << dia+1 << endl;
    cout << "Se vendieron " << temp2 << " empanadas." << endl;
}

