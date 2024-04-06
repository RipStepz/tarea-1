#include <iostream>
#include <fstream> 
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

if (!fich.is_open())
{

cout<< "hubo un error al abrir el archivo UwU´nt" << endl;


}

else
{

cout<<"se abrio UwU" << endl;

}

fich.close();

    return 0;
}