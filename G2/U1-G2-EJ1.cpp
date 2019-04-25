/* Guia 2 Ejercicio 1
Realizar una función que devuelva el doble de un número. */

#include <iostream>
using namespace std;

int el_doble(int x);

int n;
int x=4;
int main() {
n= el_doble(10);

cout<<"A) "<<n<<endl;
n= el_doble(x);
cout<<"B) "<<n<<endl;
cout<<"C) "<<el_doble(10)<<endl;
cout<<"D) "<<el_doble(x)<<endl;
return 0;
}

int el_doble(int x)
{
int num = x * 2;
return num;
}
