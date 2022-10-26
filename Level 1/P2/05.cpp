#include <iostream>
#include "robot.h"
#define repeat(nb) for(int i=0 ; i<(nb) ; i++) 
using namespace std ;
int main () {
    repeat(21) {
        haut() ;
        droite() ;
    }
    repeat(21) {
        gauche() ;
        bas() ;
    }
}
