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

struct Coordenada {
    int x;
    int y;
};

int filas(float contador);
int columnas (float contador);

bool jugada_dentro_tablero(int x,int y);
int Pos_Rey_x(const Tablero& t);
int Pos_Rey_y(const Tablero& t);
void Marcar_amenazas(const Tablero& t , int x_cambiar , int y_cambiar);
bool Descartar_casos(int x , int y);

void peon(const Tablero& t);
void alfil (const Tablero& t);
void torre(const Tablero& t);
void reyna(const Tablero& t);
void caballo(const Tablero& t);



#endif