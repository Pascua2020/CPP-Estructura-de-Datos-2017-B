/*Guia 4 Ejercicio 4

En una tienda de empanadas quieren saber qué día del mes venden más cantidad de empanadas. Realice un programa para almacenar 
la cantidad de empanadas vendidas por día (considerar que el mes tiene 30 días). 
Utilizar el array empanadasVendidas[]. 
Cargar el array con los siguientes valores: 
{10, 43, 46, 26, 482, 620, 324, 94, 32, 14, 65, 503, 720, 234, 48, 21, 54, 79, 89, 365, 621, 478, 832, 49, 30, 27, 44, 73, 300, 100, 200} 
Realizar una función que encuentre que día del mes vendió más empanadas. La función debe devolver el número de día de mayor venta. 
Informar al usuario que día se vendió más empanadas y cuántas se vendió. 
*/
#include <iostream>
using namespace std;

void masEmpanadasVendidas(float arrayTemp[31]);

int main()
{
float empanadasVendidas[31] = {100100, 1000, 46, 26, 482, 620, 324, 94, 32, 14, 65, 503, 720, 234, 48, 21
, 54, 79, 89, 365, 621, 100,  832, 849, 30, 27, 44, 73, 300, 100, 20000};
masEmpanadasVendidas(empanadasVendidas);
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

