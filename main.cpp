#include <iostream>
#include <fstream> 
#include <stdio.h>
#include "funciones.hpp"

using namespace std;
int Global_x_rey, Global_y_rey;
Tablero t;

int main() {

//los strucs estan en definidos en funciones.cpp, porque osino causan conflicto (si los usamos:3)

ifstream fich("no.txt");

if (!fich.is_open()) // if para comprobar si esta abierto
{

cout << "hubo un error al abrir el archivo UwU´nt" << endl;


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
   

Global_x_rey = Pos_Rey_x(t);
Global_y_rey = Pos_Rey_y(t);

//cout << "la posicion x del rey es: "<<Pos_Rey_x(t) <<"la posicion y del rey es: "<< Pos_Rey_y(t)<<endl;

peon(t);


// for (int i = 0 ;i<64 ;i++)
// {
//        cout<< "el caracter: "<<t.piezas_tablero[i].simbolo<<" se encuentra en la pos x: " << t.piezas_tablero[i].x <<" se encuentra en la pos y: "<< t.piezas_tablero[i].y<<endl;
//  }
for (int i = 0; i < 64; i++) {
    cout << t.piezas_tablero[i].simbolo << " ";
    if ((i + 1) % 8 == 0) {
        cout << endl; // Después de imprimir cada fila, imprime un salto de línea
    }
}


delete[] t.piezas_tablero;
fich.close();
    return 0;

}