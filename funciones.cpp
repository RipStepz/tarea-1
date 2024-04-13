#include <iostream>
#include <stdexcept>
#include "funciones.hpp"

using namespace std;
extern Tablero t;

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

     int pos_max_x = 8 , pos_max_y = 8 , pos_min_x = 1 , pos_min_y = 1;

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

void Marcar_amenazas(const Tablero& t , int x_cambiar , int y_cambiar){
 for (int i = 0 ;i<64 ;i++)
   {
    if (t.piezas_tablero[i].x == x_cambiar && t.piezas_tablero[i].y == y_cambiar && t.piezas_tablero[i].simbolo == '.'){
        t.piezas_tablero[i].simbolo = '!';
    } 
    if (t.piezas_tablero[i].x == x_cambiar && t.piezas_tablero[i].y == y_cambiar && t.piezas_tablero[i].simbolo == 'X'){
        t.piezas_tablero[i].simbolo = '$';
    }
}
}

bool Descartar_casos(int x_ver , int y_ver){ //si es verdadera significa que deberemos parar de usar ese caso
 for (int i = 0 ;i<64 ;i++)
   {
    if (t.piezas_tablero[i].x == x_ver && t.piezas_tablero[i].y == y_ver && t.piezas_tablero[i].simbolo != '.' && t.piezas_tablero[i].simbolo != '!'){
        return true;
    } 
}
return false;
}

bool Buscar_espacios_libres(const Tablero& t , int x_rey , int y_rey) {
     for (int i = 0 ;i<64 ;i++)
   {
    if (t.piezas_tablero[i].x == x_rey && t.piezas_tablero[i].y == y_rey && t.piezas_tablero[i].simbolo != '!'){
       return true;
    } 
}
return false;
}