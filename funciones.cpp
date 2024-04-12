#include <iostream>
#include <stdexcept>
#include "funciones.hpp"

using namespace std;

int filas(float contador) {
    if (contador/8 <= 1)
    {
        return 1;
    }

    else if (contador/8 <= 2)
    {
        return 2;
    }
    
    else if (contador/8 <= 3)
    
    {
        return 3;
    }

    else if (contador/8 <= 4)
    
    {
        return 4;
    }

    else if (contador/8 <= 5)
    
    {
        return 5;
    }

    else if (contador/8 <= 6)
    
    {
        return 6;
    }

    else if (contador/8 <= 7)
    
    {
        return 7;
    }

    else if (contador/8 <= 8)
    
    {
        return 8;
    }

    else{
        return -1;
    }
}

int columnas (float contador)

{

    if (contador <= 8)
     {  
        return contador;
     }

    else if ((contador > 8) && (contador <16))
     {  
        int returneable = contador;
        returneable = returneable % 8;

        return (returneable);
     }

     else if (contador == 16)
     {
        return 8;
     }

    else if ((contador > 16) && (contador <=24))
     {  
        int returneable = contador;
        returneable = returneable % 16;
        return (returneable);
     }

    else if ((contador > 24) && (contador <=32))
        {  
            int returneable = contador;
            returneable = returneable % 24;
            return (returneable);
        }

        else if ((contador > 32) && (contador <=40))
     {  
        int returneable = contador;
        returneable = returneable % 32;
        return (returneable);
     }

     else if ((contador > 40) && (contador <=48))
     {  
        int returneable = contador;
        returneable = returneable % 40;
        return (returneable);
     }

     else if ((contador > 48) && (contador <=56))
     {  
        int returneable = contador;
        returneable = returneable % 48;
        return (returneable);
     }

     else if ((contador > 56) && (contador <=64))
     {  
        int returneable = contador;
        returneable = returneable % 56;
        return (returneable);
     }
     else{
        return -1;
     }
}

bool jugada_dentro_tablero(int x,int y) {
     int pos_max_x = 7 , pos_max_y = 7 , pos_min_x = 0 , pos_min_y = 0;

    if (x < pos_max_x && x > pos_min_x && y < pos_max_y && y > pos_min_y){
        return true;
    }

    else{
        return false;
    }

}

int Pos_Rey_x(const Tablero& t){
    for (int i = 0 ;i<64 ;i++)
  {
      if (t.piezas_tablero[i].simbolo =='X'){
        int rey_x = t.piezas_tablero[i].x;
        return rey_x;
      }
  }
     throw std::runtime_error("Rey no encontrado en el tablero");
}

int Pos_Rey_y(const Tablero& t){
    for (int i = 0 ;i<64 ;i++)
  {
      if (t.piezas_tablero[i].simbolo =='X'){
        int rey_y = t.piezas_tablero[i].y;
        return rey_y;
      }
      
  }
    throw std::runtime_error("Rey no encontrado en el tablero");
}