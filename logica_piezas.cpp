#include <iostream>
#include "funciones.hpp"
using namespace std;
extern Tablero t;
extern int Global_x_rey, Global_y_rey;

void peon(const Tablero& t)
{
   for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'P'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y;

            Marcar_amenazas(t , Pos_x + 1 , Pos_Y -1 );
            Marcar_amenazas(t , Pos_x - 1 , Pos_Y -1 );
          }
        }
      }




// bool alfil (int x , int y){
// int contador = 1;
// while (contador < 9)
// {
//   if (x + contador == Global_x_rey && y + contador == Global_y_rey && jugada_dentro_tablero(x + contador, y + contador)){
    
//       return true;
//     }
    

//   else if (x - contador == Global_x_rey && y + contador == Global_y_rey && jugada_dentro_tablero(x - contador, y + contador)){
//     return true;
//     }

//   else if (x + contador == Global_x_rey && y - contador == Global_y_rey && jugada_dentro_tablero(x + contador, y - contador)){
//     return true;
//     }

//   else if (x - contador == Global_x_rey && y - contador == Global_y_rey && jugada_dentro_tablero(x - contador, y - contador) ){
//     return true;
//     }

// contador ++;
// return false;
// }
// }


// bool torre(int x,int y){
// int contador = 1;
// while (contador < 9)
// {
//   if (x + contador == Global_x_rey  && jugada_dentro_tablero(x + contador, y) ){
//     return true;
//     }
//   else if (x - contador == Global_x_rey && jugada_dentro_tablero(x - contador, y)){
//     return true;
//     }
//   else if (y + contador == Global_y_rey && jugada_dentro_tablero(x, y + contador)){
//     return true;
//     }
//   else if (y - contador == Global_y_rey && jugada_dentro_tablero(x , y - contador) ){
//     return true;
//     }
// contador ++;
// }
// return false;
// }