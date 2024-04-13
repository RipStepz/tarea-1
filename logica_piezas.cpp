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
