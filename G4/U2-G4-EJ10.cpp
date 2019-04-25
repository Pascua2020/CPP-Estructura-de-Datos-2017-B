/*Guia 4 Ejercicio 10

Se desea realizar un estudio estadístico sobre las cantidades de pizzas que se venden en una pizzería. 
Se desea saber la cantidad de pizzas que se venden de cada una de las variedades: muzzarela, fugazeta y napolitana. 
Para esto se toman los datos de venta de un mes (para simplificar utilizar 30 días). 
1) Diagramar una estructura de datos que permita almacenar los datos del problema. Realizar un esquema de la estructura en el 
caso que sea necesario. Declarar la estructura correspondiente en C++. 
2) Codificar en C++ una función o procedimiento que busque el tipo de pizza más vendida en un día del mes y devuelva la cantidad y el tipo de pizza encontrado. 
3) Codificar en C++ la invocación de la función y/o procedimiento realizado y exhibir los datos pedidos en el punto 2. 
*/
#include <iostream>
using namespace std;

void ingresarPizza(float arrayTemp[31][3]);
void pizzaMasVendida(float arrayTemp[31][3],float num);

int main()
{
float pizzas[31][3];
ingresarPizza(pizzas);
pizzaMasVendida(pizzas,1);
return 0;
}

void ingresarPizza(float arrayTemp[31][3])
{
for (int i=0; i<2; i++ )
    {
        cout << " Del dia " << i+1 << endl;
        cout << "  Ingrese cantidad de muzzarella vendida " << endl;
        cin >> arrayTemp[i][0];
        cout << "  Ingrese cantidad de fugazzeta vendida " << endl;
        cin >> arrayTemp[i][1];
        cout << "  Ingrese cantidad de napolitana vendida " << endl;
        cin >> arrayTemp[i][2];
    }
}
void pizzaMasVendida(float arrayTemp[31][3],float num)
{
num = num - 1;
int num2 = num;
if(arrayTemp[num2][0] > arrayTemp[num2][1] && arrayTemp[num2][0] > arrayTemp[num2][2])
{
    cout << "La pizza mas vendida fue la de muzzarella con " << arrayTemp[num2][0] << " cantidades vendidas" << endl;
}
else if(arrayTemp[num2][1] > arrayTemp[num2][0] && arrayTemp[num2][1] > arrayTemp[num2][2])
{
    cout << "La pizza mas vendida fue la de fugazzeta con " << arrayTemp[num2][1] << " cantidades vendidas" << endl;
}
else if(arrayTemp[num2][2] > arrayTemp[num2][0] && arrayTemp[num2][2] > arrayTemp[num2][1])
{
    cout << "La pizza mas vendida fue la de napolitana con " << arrayTemp[num2][2] << " cantidades vendidas" << endl;
}
else
{
    cout << "Ninguna fue mas vendida que otra "  << endl;
}
}

