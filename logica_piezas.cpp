#include <iostream>
#include "funciones.hpp"
using namespace std;

extern int Global_x_rey, Global_y_rey;

bool peon(int x, int y)
{
    if (x + 1 == Global_x_rey && y-1 == Global_y_rey && jugada_dentro_tablero(x + 1, y-1)){
      return true;
    }
   
    if (x-1 == Global_x_rey && y-1 == Global_y_rey && jugada_dentro_tablero(x - 1, y-1)){

      return true;
   }

  else {
    return false;
  }
}

bool alfil (int x , int y){
int contador = 1;
while (contador < 9)
{
  if (x + contador == Global_x_rey && y + contador == Global_y_rey && jugada_dentro_tablero(x + contador, y + contador)){
    return true;
    }
  else if (x - contador == Global_x_rey && y + contador == Global_y_rey && jugada_dentro_tablero(x - contador, y + contador)){
    return true;
    }
  else if (x + contador == Global_x_rey && y - contador == Global_y_rey && jugada_dentro_tablero(x + contador, y - contador)){
    return true;
    }
  else if (x - contador == Global_x_rey && y - contador == Global_y_rey && jugada_dentro_tablero(x - contador, y - contador)){
    return true;
    }
}
return false;
}

bool torre(int x,int y){
int contador = 1;
while (contador < 9)
{
  if (x + contador == Global_x_rey  && jugada_dentro_tablero(x + contador, y)){
    return true;
    }
  else if (x - contador == Global_x_rey && jugada_dentro_tablero(x - contador, y)){
    return true;
    }
  else if (y + contador == Global_y_rey && jugada_dentro_tablero(x, y + contador)){
    return true;
    }
  else if (y - contador == Global_y_rey && jugada_dentro_tablero(x , y - contador)){
    return true;
    }
}
return false;
}