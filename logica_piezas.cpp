#include <iostream>
#include "funciones.hpp"
using namespace std;
extern Tablero t;

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

void alfil(const Tablero& t){
for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'A'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y, contador = 1;
          bool flag_1 = true , flag_2 = true , flag_3 = true , flag_4 = true;

            while (contador < 9){
            if (flag_1){
            Marcar_amenazas(t , Pos_x + contador , Pos_Y + contador);
              if (Descartar_casos(Pos_x + contador , Pos_Y + contador)){
                flag_1 = false;
              }
            }
            if (flag_2){
            Marcar_amenazas(t , Pos_x - contador , Pos_Y + contador);
              if (Descartar_casos(Pos_x - contador , Pos_Y + contador)){
                flag_2 = false;
              }
            }

            if (flag_3){
            Marcar_amenazas(t , Pos_x + contador , Pos_Y - contador);
              if (Descartar_casos(Pos_x + contador , Pos_Y - contador)){
                flag_3 = false;
              }
            }

            if (flag_4){
            Marcar_amenazas(t , Pos_x - contador , Pos_Y - contador );
              if (Descartar_casos(Pos_x - contador , Pos_Y - contador)){
                flag_4 = false;
              }
            }
            contador ++;
          }
        }
      }
}

void torre(const Tablero& t){
for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'T'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y, contador = 1;
          bool flag_1 = true , flag_2 = true , flag_3 = true , flag_4 = true;

            while (contador < 9){
            if (flag_1){
            Marcar_amenazas(t , Pos_x + contador , Pos_Y);
              if (Descartar_casos(Pos_x + contador , Pos_Y)){
                flag_1 = false;
              }
            }
            if (flag_2){
            Marcar_amenazas(t , Pos_x - contador , Pos_Y);
              if (Descartar_casos(Pos_x - contador , Pos_Y)){
                flag_2 = false;
              }
            }

            if (flag_3){
            Marcar_amenazas(t , Pos_x, Pos_Y + contador);
              if (Descartar_casos(Pos_x, Pos_Y + contador)){
                flag_3 = false;
              }
            }

            if (flag_4){
            Marcar_amenazas(t , Pos_x, Pos_Y - contador );
              if (Descartar_casos(Pos_x, Pos_Y - contador)){
                flag_4 = false;
              }
            }
            contador ++;
          }
        }
      }
}

void reyna(const Tablero& t){
for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'R'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y, contador = 1;
          bool flag_1 = true , flag_2 = true , flag_3 = true , flag_4 = true;

          while (contador < 9){
            if (flag_1){
            Marcar_amenazas(t , Pos_x - contador , Pos_Y);
              if (Descartar_casos(Pos_x - contador , Pos_Y)){
                flag_1 = false;
              }
            }
            if (flag_2){
            Marcar_amenazas(t , Pos_x + contador , Pos_Y);
              if (Descartar_casos(Pos_x + contador , Pos_Y)){
                flag_2 = false;
              }
            }

            if (flag_3){
            Marcar_amenazas(t , Pos_x, Pos_Y - contador);
              if (Descartar_casos(Pos_x, Pos_Y - contador)){
                flag_3 = false;
              }
            }

            if (flag_4){
            Marcar_amenazas(t , Pos_x, Pos_Y + contador );
              if (Descartar_casos(Pos_x, Pos_Y + contador)){
                flag_4 = false;
              }
            }
            contador ++;
          }
 contador =1;
flag_1 = true;
flag_2 =true;
flag_3 =true;
flag_4 =true;

            while (contador < 9){
            if (flag_1){
            Marcar_amenazas(t , Pos_x + contador , Pos_Y + contador);
              if (Descartar_casos(Pos_x + contador , Pos_Y + contador)){
                flag_1 = false;
              }
            }
            if (flag_2){
            Marcar_amenazas(t , Pos_x - contador , Pos_Y + contador);
              if (Descartar_casos(Pos_x - contador , Pos_Y + contador)){
                flag_2 = false;
              }
            }

            if (flag_3){
            Marcar_amenazas(t , Pos_x + contador , Pos_Y - contador);
              if (Descartar_casos(Pos_x + contador , Pos_Y - contador)){
                flag_3 = false;
              }
            }

            if (flag_4){
            Marcar_amenazas(t , Pos_x - contador , Pos_Y - contador );
              if (Descartar_casos(Pos_x - contador , Pos_Y - contador)){
                flag_4 = false;
              }
            }
            contador ++;
          }
          
        }
      }
}

void caballo(const Tablero& t)
{
   for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'C'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y;

            Marcar_amenazas(t , Pos_x + 2 , Pos_Y + 1 );
            Marcar_amenazas(t , Pos_x - 2 , Pos_Y + 1 );

            Marcar_amenazas(t , Pos_x + 1 , Pos_Y + 2 );
            Marcar_amenazas(t , Pos_x - 1 , Pos_Y + 2 );

            Marcar_amenazas(t , Pos_x + 2 , Pos_Y - 1 );
            Marcar_amenazas(t , Pos_x - 2 , Pos_Y - 1 );

            Marcar_amenazas(t , Pos_x + 1 , Pos_Y - 2 );
            Marcar_amenazas(t , Pos_x - 1 , Pos_Y - 2 );
          }
        }
      }

void Rey_S(const Tablero& t){
for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'K'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y;

            Marcar_amenazas(t , Pos_x + 1 , Pos_Y );
            Marcar_amenazas(t , Pos_x - 1 , Pos_Y );

            Marcar_amenazas(t , Pos_x , Pos_Y + 1 );
            Marcar_amenazas(t , Pos_x , Pos_Y - 1 );

            Marcar_amenazas(t , Pos_x + 1 , Pos_Y - 1 );
            Marcar_amenazas(t , Pos_x - 1 , Pos_Y - 1 );

            Marcar_amenazas(t , Pos_x + 1 , Pos_Y + 1 );
            Marcar_amenazas(t , Pos_x - 1 , Pos_Y + 1 );
          }
        }
}

bool Rey_X(const Tablero& t){
for (int i = 0 ;i<64 ;i++)
      {
        if (t.piezas_tablero[i].simbolo == 'X'){
          int Pos_x = t.piezas_tablero[i].x , Pos_Y = t.piezas_tablero[i].y;

            if(Buscar_espacios_libres(t ,Pos_x + 1 , Pos_Y) ){
              return true;
            }
            if (Buscar_espacios_libres(t , Pos_x - 1 , Pos_Y )){
               return true;
            }
        

            if (Buscar_espacios_libres(t , Pos_x , Pos_Y + 1 )){
               return true;
            }
            if (Buscar_espacios_libres(t , Pos_x , Pos_Y - 1)){
               return true;
            }


            if (Buscar_espacios_libres(t , Pos_x + 1 , Pos_Y - 1)){
               return true;
            }
            if (Buscar_espacios_libres(t , Pos_x - 1 , Pos_Y - 1)){
               return true;
            }


            if (Buscar_espacios_libres(t , Pos_x + 1 , Pos_Y + 1)){
               return true;
            }
            if (Buscar_espacios_libres(t , Pos_x - 1 , Pos_Y + 1)){
               return true;
            }
          }
        }
return false;
}
