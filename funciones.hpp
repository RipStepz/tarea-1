#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <stdio.h>

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

int filas(float contador);
int columnas (float contador);

bool jugada_dentro_tablero(int x,int y);
int Pos_Rey_x(const Tablero& t);
int Pos_Rey_y(const Tablero& t);
bool Tablero_limpio(int x, int y);

bool peon(int x, int y);
bool alfil (int x , int y);
bool torre(int x,int y);



#endif