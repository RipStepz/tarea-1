#include <iostream>
#include <fstream> 
#include <stdio.h>
#include "funciones.hpp"
using namespace std;

int main() {

struct Pieza 
{

 char simbolo; // Define qué tipo de pieza es y su caracter
 int x, y; // Su posición dentro del tablero [0, 7] x [0, 7]

};

struct Tablero 
{

 Pieza* piezas_tablero; // Lista de piezas que tiene el tablero

};

ifstream fich("no.txt");

if (!fich.is_open()) // if para comprobar si esta abierto
{

cout<< "hubo un error al abrir el archivo UwU´nt" << endl;


}

else //doble
{

cout<<"se abrio UwU" << endl;

}

char caracter;
string numero = "";
float contador = 1;

if (getline(fich , numero))
{
    cout << numero << endl;
}

while(!fich.eof()) // while para recorrer los caracteres
{

    fich.get(caracter);
    
    if (caracter != '.' && caracter != '\n')
    {
        cout<<"la letra es: " <<caracter << " su fila es la: "<<filas(contador) << " su columna es: "<< columnas(contador) <<endl;
    }
    contador++;
    if (caracter == '\n')
    {
        contador = contador -1;
    }
}

fich.close();

    return 0;
}