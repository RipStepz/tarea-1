#include <iostream>
#include <fstream> 
#include <stdio.h>
#include "funciones.hpp"

using namespace std;
Tablero t;

int main(){ //los strucs estan en definidos en funciones.cpp, porque o si no causan conflicto (si los usamos:3)

ifstream fich("no.txt");

char caracter;
string numero = "";
float contador = 1;
int c_arreglo = 0;

t.piezas_tablero = new Pieza[64];

if (getline(fich , numero)){
    t.cantidad_piezas = stoi(numero);
}
fich.get(caracter); 
while(!fich.eof()){ // while para recorrer los caracteres

    if (caracter != '\n'){
         t.piezas_tablero[c_arreglo].simbolo = caracter;
         t.piezas_tablero[c_arreglo].x = columnas(contador);
         t.piezas_tablero[c_arreglo].y = filas(contador);
     }

    contador++;
    c_arreglo++;

    if (caracter == '\n'){
        contador = contador -1;
        c_arreglo = c_arreglo -1;
    }
    fich.get(caracter); 
}
   
//cout << "la posicion x del rey es: "<<Pos_Rey_x(t) <<"la posicion y del rey es: "<< Pos_Rey_y(t)<<endl;

peon(t);
alfil(t);
torre(t);
reyna(t);
caballo(t);
Rey_S(t);

for (int i = 0; i < 64; i++) {
    cout << t.piezas_tablero[i].simbolo << " ";
    if ((i + 1) % 8 == 0) {
        cout << endl; // Después de imprimir cada fila, imprime un salto de línea
    }
}

if (Rey_X(t)){
cout << "No" << endl;
}

else{
    if (Verificar_Rey_Ahogado(t)){
    cout << "No" << endl; //hay rey ahogado
    }
    else{
        cout << "Si" << endl;
    }
}

fich.close();

    return 0;
}