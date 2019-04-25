/* Guia 3 - Ejercicio Grupal 1

Desarrollar la programación del juego Piedra, Papel o Tijera.
La idea es competir contra la computadora. Con lo cual hay que pedirle al usuario que ingrese un valor entre 1 y 3:
1: Piedra
2: Papel
3: Tijera
La computadora arrojará su jugada (Piedra, Papel o Tijera). Para esto valerse del programa que genera un número al azar entre 1 y 3 (Random v1.02.cpp) que se encuentra en el e-learning.
El programa deberá anunciar al ganador siguiendo las reglas del juego:
Tijera le gana a Papel
Papel le gana a Piedra
Piedra le gana a Tijera
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
using namespace std;
int menuOpciones(); // Hecho por Gonzalo Escudero
int casos(int n); // Hecho por Lucas Leyton
void aleatorio(int &jugada); // Hecho por Lucas Leyton
int eleccion(); // Hecho por Denis Casal
int resultado(int a, int b);//Hecho por Santiago De Franceschi
void resultadoFinal(int a, int b, int c);//Hecho por Santiago De Franceschi

int main ()
{
    int jugada, rondas, resul,resul2,resultadosRondas[3];
    menuOpciones();

    for (rondas=1;rondas<=3;rondas++)
    {
    cout<<"Ronda Numero: "<<rondas<<endl;
    resul=casos(eleccion());
    cout<<"Eleccion de la computadora"<<endl;
    aleatorio(jugada);
    resul2=casos(jugada);
    resultadosRondas[rondas-1]=resultado(resul,resul2);
    }

    resultadoFinal(resultadosRondas[0],resultadosRondas[1],resultadosRondas[2]);

return 0;
}

int menuOpciones() // El usuario elige si desea jugar o salir.
// En caso de opcion incorrecta se pide de vuelta su ingreso.
{
    string x;
    cout << "*** Bienvenidos al juego Piedra,papel o tijera ***" <<  endl<<endl;
    cout << "Ingrese 0 si desea jugar" <<  endl;
    cout << "Ingrese 1 si desea salir" <<  endl<<endl;
    cin >> x;
    cout<<endl;
    system("cls");
    while(x != "0" && x != "1")
    {
        cout << "Ingrese un valor correcto" << endl;
        cin >> x;
    }
    if(x == "0")
    {
        cout<<endl;
        cout << "Ingrese 1 para piedra" << endl;
        cout << "Ingrese 2 para papel" << endl;
        cout << "Ingrese 3 para tijera" << endl<<endl;
    }
    else if(x == "1")
    {
        cout << "Fin del Juego" <<  endl;
        exit(0);
    }

}



int casos(int n)
{
       int x;
       switch( n )
{
  case 1: cout<<"Piedra."<<endl<<endl;
  x=1;
  return x;
  break;
  case 2: cout<<"Papel."<<endl<<endl;
  x=2;
  return x;
  break;
  case 3: cout<<"Tijera."<<endl<<endl;
  x=3;
  return x;
  break;
}

}

void aleatorio (int &numero)
{
    srand(time(NULL));
    numero = rand() % 3 + 1;
}

int eleccion()
{
    int x;
    cout<<"Seleccione su jugada"<<endl<<endl;
    cin>>x;
    system("cls");
   while(x<1 || x>3)
   {
       cout<< "Jugada incorrecta : ingrese un valor correcto" <<endl;
       cin>>x;
       system ("cls");
   }

   return x;
}

int resultado(int a, int b)
{
    if((a==1 && b==1) || (a==2 && b==2) || (a==3 && b==3))
    {
        cout<<"*** Hay empate :| *** "<<endl<<endl;
        return 3;
    }
    if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))
    {
        cout<<"*** Gana la ronda el Jugador :D *** "<<endl<<endl;
        return 1;
    }
    if((a==3 && b==1) || (a==1 && b==2) || (a==2 && b==3))
    {
        cout<<"*** Gana la ronda la Computadora :( *** "<<endl<<endl;
        return 2;
    }
    }

void resultadoFinal(int a, int b, int c)
{
    if (a==1 && b==2 && c==3)
    {
        cout<<"/// Hubo un empate final ///"<<endl;
    }
    if (a==1 && b==3 && c==2)
    {
        cout<<"/// Hubo un empate final ///"<<endl;
    }
    if (a==2 && b==1 && c==3)
    {
        cout<<"/// Hubo un empate final ///"<<endl;
    }
    if (a==3 && b==2 && c==1)
    {
        cout<<"/// Hubo un empate final ///"<<endl;
    }
    if (a==2 && b==3 && c==1)
    {
        cout<<"/// Hubo un empate final ///"<<endl;

    }
    if (a==3 && b==1 && c==2)
    {
        cout<<"/// Hubo un empate final ///"<<endl;

    }
    if (a==3 && b==3 && c==3)
    {
        cout<<"/// Hubo un empate final ///"<<endl;

    }
    if (a==3 && b==3 && c==2)
    {
        cout<<"/// Hubo un empate final ///"<<endl;

    }
    if (a==1 && b==1 && c==1)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
     if (a==1 && b==1 && c==2)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==1 && b==1 && c==3)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==1 && b==2 && c==1)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==2 && b==1 && c==1)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==1 && b==3 && c==1)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==3 && b==1 && c==1)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==3 && b==1 && c==3)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==1 && b==3 && c==3)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }
    if (a==3 && b==3 && c==1)
    {
        cout<<"+++ El ganador de la partida es el Jugador +++"<<endl;
    }

    if ((a==2 && b==2 && c==2) || (a==2 && b==2 && c==1) || (a==2 && b==2 && c==3) || (a==2 && b==1 && c==2) || (a==1 && b==2 && c==2) || (a==2 && b==3 && c==2) || (a==3 && b==2 && c==2) || (a==3 && b==2 && c==3) || (a==2 && b==3 && c==3) || (a==3 && b==3 && c==2))
    {
        cout<<"--- El ganador de la partida es la Computadora ---"<<endl;
    }
}
