#include <iostream>
#include "funciones.hpp"
using namespace std;



int coordenadas(float contador) {
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

