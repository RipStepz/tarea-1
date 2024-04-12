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
 int cantidad_piezas;
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
int c_arreglo = 0;
const int Max = 64;
Tablero t;
t.piezas_tablero = new Pieza[64];

 if (getline(fich , numero))
 {
    t.cantidad_piezas = stoi(numero);
 }

while(!fich.eof()) // while para recorrer los caracteres
{

    fich.get(caracter);
    if (caracter != '.' && caracter != '\n')
    {
        //cout<<"la letra es: " <<caracter << " su fila es la: "<<filas(contador) << " su columna es: "<< columnas(contador) <<endl;
    }
   
       if (caracter != '\n')
     {
         t.piezas_tablero[c_arreglo].simbolo = caracter;
         t.piezas_tablero[c_arreglo].x = columnas(contador);
         t.piezas_tablero[c_arreglo].y = filas(contador);

     }

    contador++;
    c_arreglo++;

    if (caracter == '\n')
    {
        contador = contador -1;
        c_arreglo = c_arreglo -1;
    }
}
  for (int i = 0 ;i<64 ;i++)
  {
      cout << "el caracter: "<<t.piezas_tablero[i].simbolo<<" se encuentra en la pos x: " << t.piezas_tablero[i].x <<" se encuentra en la pos y: "<< t.piezas_tablero[i].y<<endl;
  }

fich.close();

cout<< peon(1 , 2) << endl;

    return 0;
}